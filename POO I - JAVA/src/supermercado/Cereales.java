package supermercado;

import java.time.LocalDate;

public class Cereales extends Producto implements EsAlimento {

	private TipoCereal tipoDeCereal;
	private LocalDate caducidad;
	
	public Cereales(String marca, double precio, TipoCereal tipoDeCereal) {
		super(marca, precio);
		this.tipoDeCereal = tipoDeCereal;
		this.caducidad = LocalDate.MAX;
	}

	public TipoCereal getTipoDeCereal() {
		return tipoDeCereal;
	}

	public void setTipoDeCereal(TipoCereal tipoDeCereal) {
		this.tipoDeCereal = tipoDeCereal;
	}

	@Override
	public String toString() {
		return super.toString() + "," + this.tipoDeCereal.toString() + ", Caducidad: " + this.getCaducidad().toString();
	}

	@Override
	public void setCaducidad(LocalDate fc) {
		this.caducidad = fc;
	}

	@Override
	public LocalDate getCaducidad() {
		return caducidad;
	}

	@Override
	public int getCalorias() {
		return this.tipoDeCereal.getCalorias();
	}
	
}
