package main;

import java.util.ArrayList;

public class Cliente {

	private String nombre;
	private int dni;
	private ArrayList<Orden> ordenes;
	
	public Cliente(String nombre, int dni) {
		this.nombre = nombre;
		this.dni = dni;
		this.ordenes = new ArrayList<>();
	}
	
	public void addOrden(Orden o) {
		this.ordenes.add(o);
	}

	public String getNombre() {
		return nombre;
	}

	public int getDni() {
		return dni;
	}
	
	
	
}
