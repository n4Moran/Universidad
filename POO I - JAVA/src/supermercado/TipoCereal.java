package supermercado;

public enum TipoCereal {
	MAIZ(8), TRIGO(12), ESPELTA(5), OTROS(15);

	private int calorias;

	private TipoCereal(int calorias) {
		this.calorias = calorias;
	}

	public int getCalorias() {
		return calorias;
	}

	public void setCalorias(int calorias) {
		this.calorias = calorias;
	}
	public String toString() {
		return " Tipo de cereal: " + this.name() + ", Calorias:" + calorias;
	}
	

}
