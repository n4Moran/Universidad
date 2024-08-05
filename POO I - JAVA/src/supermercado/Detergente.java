package supermercado;

public class Detergente extends Producto implements ConDescuento {

	private double descuento;

	public Detergente(String marca, double precio) {
		super(marca, precio);// siempre el super primero
		this.descuento = 0;
	}

	@Override
	public String toString() {
		return super.toString() + ", Descuento: " + this.getDescuento();
	}

	@Override
	public void setDescuento(double des) {
		this.descuento = des;

	}

	@Override
	public double getDescuento() {
		return descuento;
	}

	@Override
	public double getPrecioDescuento() {
		return this.getPrecio() - this.getPrecio() * this.getDescuento() / 100;
	}

}
