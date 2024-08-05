package main;

public class DetalleOrden {

	private Notebook item;
	private double precioUnitario;
	private int cantidad;
	
	public DetalleOrden(Notebook item, double precioUnitario, int cantidad) {
		this.item = item;
		this.precioUnitario = precioUnitario;
		this.cantidad = cantidad;
	}

	public Notebook getItem() {
		return item;
	}

	public double getPrecioUnitario() {
		return precioUnitario;
	}

	public int getCantidad() {
		return cantidad;
	}
	
	
}
