package juego;

public class Caballo implements Bebedor {

	private boolean rebelde;

	public boolean estaRebelde() {
		return this.rebelde;
	}

	@Override
	public void beberAgua() {
		this.rebelde = false;
	}
	
	public void sePoneRebelde() {
		this.rebelde = true;
	}
	
}
