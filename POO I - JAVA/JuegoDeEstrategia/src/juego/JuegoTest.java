package juego;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class JuegoTest {

	@Test
	void ataqueSoldadoArqueroTest() {
		Soldado mateo = new Soldado(new Punto(2, 2));
		Arquero natasha = new Arquero(new Punto(3, 3));
		
		
		while (natasha.puedeAtacar(mateo)) {
			natasha.atacar(mateo);
			if (natasha.getFlechas() == 0) {
				natasha.recargar();
			}
		}

		assertEquals(0, mateo.getSalud());
	}

}
