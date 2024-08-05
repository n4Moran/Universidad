package juego;

public class Arquero extends Unidad  {

	private int flechas;

	public Arquero(Punto posicion) {
		super(50, 5, posicion);
		this.flechas = 20;
	}

	public int getFlechas() {
		return flechas;
	}

	public void setFlechas(int flechas) {
		this.flechas = flechas;
	}
	
	public void recargar() {
		this.flechas += 6;
	}

	@Override
	public void atacar(Unidad enemigo) {
		if (this.puedeAtacar(enemigo)) {
			this.flechas -= 1;
			enemigo.recibirDanio(this.getDanio());
		} else
			System.out.println("No puede Atacar");
	}

	@Override
	public boolean puedeAtacar(Unidad enemigo) {
		//FALTA AGREGAR LA DISTANCIA COMO OTRA CONDICION TODO
		return enemigo.estaVivo() && this.flechas > 0 && this.estaVivo();
	}
	
}
