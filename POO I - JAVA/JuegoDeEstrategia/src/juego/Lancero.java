package juego;

public class Lancero extends Unidad  {

	public Lancero(Punto posicion) {
		super(150, 25, posicion);
	}

	@Override
	public void atacar(Unidad enemigo) {
		if (this.puedeAtacar(enemigo)) {
			enemigo.recibirDanio(this.getDanio());
		} else
			System.out.println("No puede Atacar");
	}

	@Override
	public boolean puedeAtacar(Unidad enemigo) {
		return enemigo.estaVivo() && this.estaVivo();
	}


	
	
}
