package juego;

public abstract class Unidad {

	private int salud;
	private int danio;
	private Punto posicion;

	public Unidad(int salud, int danio, Punto posicion) {
		this.salud = salud;
		this.danio = danio;
		this.posicion = posicion;
	}

	public int getSalud() {
		return salud;
	}

	public void setSalud(int salud) {
		this.salud = salud;
	}

	public int getDanio() {
		return danio;
	}

	public void setDanio(int danio) {
		this.danio = danio;
	}

	public Punto getPosicion() {
		return posicion;
	}

	public void setPosicion(Punto posicion) {
		this.posicion = posicion;
	}

	public abstract void atacar(Unidad enemigo);

	public abstract boolean puedeAtacar(Unidad u);

	public void recibirDanio(int danio) {
		this.salud -= danio;
	}
	
	public boolean estaVivo() {
		return this.salud > 0;
	}

}
