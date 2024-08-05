package playlist;

public class Cancion implements Comparable<Cancion>{

	private String interprete;
	private String titulo;
	private int duracion;

	public Cancion(String interprete, String titulo, int duracion) {
		this.interprete = interprete;
		this.titulo = titulo;
		this.duracion = duracion;
	}

	public String getInterprete() {
		return interprete;
	}

	public void setInterprete(String interprete) {
		this.interprete = interprete;
	}

	public String getTitulo() {
		return titulo;
	}

	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}

	public int getDuracion() {
		return duracion;
	}

	public void setDuracion(int duracion) {
		this.duracion = duracion;
	}

	@Override
	public int compareTo(Cancion o) {
		return Double.compare(this.duracion, o.duracion); //compara la relacion entre las duraciones del objeto
	}

}
