package main;

import java.time.LocalDate;

public class Servicio {

	private LocalDate fechaInicio;
	
	//CONSTRUCTOR
	public Servicio(LocalDate fechaInicio) {
		this.fechaInicio = fechaInicio;
	}
	
	public Servicio() {
		this.fechaInicio = LocalDate.MAX; //Toma la fecha maxima
	}
	
	//METODO
	public void setFechaInicio(LocalDate fechaInicio) {
		this.fechaInicio = fechaInicio;
	}
	
	public LocalDate getFechaInicio() {
		return fechaInicio;
	}
}
