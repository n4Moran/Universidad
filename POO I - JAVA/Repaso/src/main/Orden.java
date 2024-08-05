package main;

import java.util.ArrayList;
import java.util.Date;

public class Orden {

	private ArrayList<DetalleOrden> items;
	private int id;
	private Date creacion;
	private Date envio;

	public Orden(int id, Date creacion) {
		this.items = new ArrayList<>();
		this.id = id;
		this.creacion = creacion;
		this.envio = null; // POR DEFECTO ES NULL
	}

	public void agregarItem(DetalleOrden dt) {
		this.items.add(dt);
	}

	public int getNroItems() {
		return items.size();
	}

	public void setEnvio(Date envio) {
		this.envio = envio;
	}
	
	public double calcularTotalOrden() {
		double precioTotal = 0;
		for (DetalleOrden orden : this.items) {
			precioTotal += orden.getPrecioUnitario() * orden.getCantidad();
		}
		return precioTotal;
	}
	
}
