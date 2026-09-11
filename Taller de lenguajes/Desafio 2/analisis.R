## Dataset: Stack Overflow Developer Survey 2024
##En español: Encuesta para desarrolladores de Stack Overflow 2024

library(tidyverse)
install.packages("maps")
library(maps)

encuesta <- read_csv("survey_results_public.csv")

#Profe como el dataset tiene muchas columnas solo voy a dejar las que coincidero importantes
datos <- select(encuesta, ResponseId, Country, Age, YearsCodePro,
                 ConvertedCompYearly, LanguageHaveWorkedWith)

# Carga y limpieza: detecta nulos, duplicados y normaliza categoría
# hay celdas que dicen "NA" como texto en vez de ser NA de verdad, las arreglo:

datos$Country <- na_if(datos$Country, "NA") #A los que estan como string "NA" los paso a NA(de null que no tiene dato)
datos$YearsCodePro <- na_if(datos$YearsCodePro, "NA")
datos$LanguageHaveWorkedWith <- na_if(datos$LanguageHaveWorkedWith, "NA")
View(datos)

colSums(is.na(datos))         # cantidad de nulos(N/A) por columna.
sum(duplicated(datos))         # filas duplicadas

summary(datos$ConvertedCompYearly) #Resumen de ConvertedCompYearly
View(datos)

# paso YearsCodePro a numero (los textos raros como "Less than 1 year" van a quedar como NA)
datos$YearsCodePro <- as.numeric(datos$YearsCodePro)
View(datos)

# reviso si hay salarios en 0 (Porque no tiene sentido, es una inconsistencia)
sum(datos$ConvertedCompYearly == 0, na.rm = TRUE)

#Limpieza

datos <- distinct(datos)   # saco duplicados si hay

# Reemplazo el salario faltante con la mediana (Para poder tener un valor porque sino es NA)
mediana_salario <- median(datos$ConvertedCompYearly, na.rm = TRUE)
datos$ConvertedCompYearly[is.na(datos$ConvertedCompYearly)] <- mediana_salario

# Reemplazo los paices faltantes con "Desconocido"
datos$Country[is.na(datos$Country)] <- "Desconocido"

# normalizo LanguageHaveWorkedWith: viene con varios lenguajes juntos separados por ";"
# entonces separo cada lenguaje en su propia fila
datos_lang <- separate_rows(datos, LanguageHaveWorkedWith, sep = ";")
View(datos)

# Reviso los datos atipicos:

boxplot(datos$ConvertedCompYearly, main = "Salario")

# Graficos:

# grafico de barras: top 10 lenguajes mas usados
top10 <- datos_lang %>%
  count(LanguageHaveWorkedWith, sort = TRUE) %>%
  na.omit() %>%
  head(10)

ggplot(top10, aes(x = reorder(LanguageHaveWorkedWith, n), y = n)) +
  geom_col() +
  coord_flip() +
  labs(title = "Top 10 lenguajes mas usados", x = "Lenguaje", y = "Cantidad")

# grafico de lineas: salario promedio segun años de experiencia
# (la encuesta es de un solo año, no hay fechas, asi que uso esto como "tendencia")
tendencia <- datos %>%
  filter(!is.na(YearsCodePro)) %>%
  group_by(YearsCodePro) %>%
  summarise(salario_prom = mean(ConvertedCompYearly))

ggplot(tendencia, aes(x = YearsCodePro, y = salario_prom)) +
  geom_line() +
  labs(title = "Salario promedio segun experiencia", x = "Anios de experiencia", y = "Salario")

# mapa: cantidad de respuestas por pais (Osea cantidad de personas que respondieron la encuesta)
por_pais <- datos %>% count(Country) %>% rename(region = Country)
mapa <- map_data("world")
mapa_final <- left_join(mapa, por_pais, by = "region")

ggplot(mapa_final, aes(long, lat, group = group, fill = n)) +
  geom_polygon() +
  labs(title = "Respuestas por pais", fill = "Cantidad")

