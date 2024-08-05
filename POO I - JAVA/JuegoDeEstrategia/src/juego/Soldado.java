package juego;

public class Soldado extends Unidad implements Bebedor {

	private int energia;

	public Soldado(Punto posicion) {
		super(200, 10, posicion);
		this.energia = 100;
	}

	public int getEnergia() {
		return energia;
	}

	public void setEnergia(int energia) {
		this.energia = energia;
	}

	@Override
	public void beberAgua() {
		this.energia = 100;
	}

	@Override
	public void atacar(Unidad enemigo) {
		if (this.puedeAtacar(enemigo)) {
			this.energia -= 10;
			enemigo.recibirDanio(this.getDanio());
		} else
			System.out.println("No puede Atacar");
	}

	@Override
	public boolean puedeAtacar(Unidad enemigo) {
		return enemigo.estaVivo() && this.energia >= 10 && this.estaVivo();
	}

}
