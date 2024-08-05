package playlist;

import java.util.Arrays;

public class Playlist {

	private Cancion[] canciones;
	private static int cantCanciones;

	public Playlist(int maxCantCanciones) {
		this.canciones = new Cancion[maxCantCanciones];
		cantCanciones = 0;
	}

	public int getCantidadCanciones() {
		return cantCanciones;
	}

	public void agregarCancion(String interprete, String titulo, int duracion) {
		if (cantCanciones < canciones.length) {
			canciones[cantCanciones] = new Cancion(interprete, titulo, duracion);
			cantCanciones++;
		} else {
			System.out.println("No hay suficiente espacio en la playlist");
		}
	}

	public Cancion cancionEnLaPosicion(int posicion) {
		return canciones[posicion - 1];
	}

	public Cancion cancionMayorDuracion() {
		Cancion max = canciones[0];

		for (int i = 0; i < cantCanciones; i++) {
			if (canciones[i].getDuracion() > max.getDuracion()) {
				max = canciones[i];
			}
		}
		return max;
	}

	public Cancion[] cancionesDelInterprete(String interprete) {
		Arrays.sort(canciones);

	}

}
