package juego;

public class Caballero extends Unidad {

	private Caballo caballo;
	private int cantAtaques;

	public Caballero(Punto posicion, Caballo caballo, int cantAtaques) {
		super(200, 50, posicion);
		this.caballo = caballo;
		this.cantAtaques = 0;
	}

	public Caballo getCaballo() {
		return caballo;
	}

	public void setCaballo(Caballo caballo) {
		this.caballo = caballo;
	}

	public int getCantAtaques() {
		return cantAtaques;
	}

	public void setCantAtaques(int cantAtaques) {
		this.cantAtaques = cantAtaques;
	}

	@Override
	public void atacar(Unidad enemigo) {
		if (this.puedeAtacar(enemigo)) {
			this.cantAtaques++;
			enemigo.recibirDanio(this.getDanio());
		} else
			System.out.println("No puede Atacar");
		if (cantAtaques ==3) {
			this.caballo.sePoneRebelde();
		}
	}

	@Override
	public boolean puedeAtacar(Unidad enemigo) {
		return enemigo.estaVivo() && !this.caballo.estaRebelde() && this.estaVivo();
	}

	public void darAguaAlCaballo() {
		this.caballo.beberAgua();
		this.cantAtaques = 0;
	}

}
