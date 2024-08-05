package supermercado;

public class Vino extends Producto implements EsLiquido, ConDescuento {

	private String tipoDeVino;
	private double gradosDeAlcohol;
	private double calorias;
	private double volumen;
	private String tipoEnvase;
	
	public Vino(String marca, double precio, String tipoDeVino, double gradosDeAlcohol) {
		super(marca, precio);
		this.tipoDeVino = tipoDeVino;
		this.gradosDeAlcohol = gradosDeAlcohol;
	}

	public String getTipoDeVino() {
		return tipoDeVino;
	}

	public void setTipoDeVino(String tipoDeVino) {
		this.tipoDeVino = tipoDeVino;
	}

	public double getGradosDeAlcohol() {
		return gradosDeAlcohol;
	}

	public void setGradosDeAlcohol(double gradosDeAlcohol) {
		this.gradosDeAlcohol = gradosDeAlcohol;
	}
	@Override
	public String toString() {
		return super.toString() + ", Tipo de vino: " + this.tipoDeVino + ", Grados de alcohol: " + this.gradosDeAlcohol;
	}

	@Override
	public void setVolumen(double v) {
		volumen = v;
	}

	@Override
	public double getVolumen() {
		return volumen;
	}

	@Override
	public void setTipoEnvase(String env) {
		tipoEnvase = env;
	}

	@Override
	public String getTipoEnvase() {
		return tipoEnvase;
	}

	@Override
	public void setDescuento(double des) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public double getDescuento() {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public double getPrecioDescuento() {
		// TODO Auto-generated method stub
		return 0;
	}

	public double getCalorias() {
		return calorias;
	}

	public void setCalorias(double calorias) {
		this.calorias = this.gradosDeAlcohol*10;
	}

	
}
