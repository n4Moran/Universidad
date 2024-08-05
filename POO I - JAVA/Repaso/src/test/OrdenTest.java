package test;

import static org.junit.jupiter.api.Assertions.*;

import java.util.Date;

import org.junit.jupiter.api.Test;

import main.DetalleOrden;
import main.Notebook;
import main.Orden;

class OrdenTest {

	@Test
	public void verificarPrecioTotal() {
		Orden orden = new Orden(1, new Date());
		orden.agregarItem(new DetalleOrden(new Notebook("Abble", "Pro", "NA", 0), 200.0, 2));
		orden.agregarItem(new DetalleOrden(new Notebook("Mamung", "Z", "NA", 0), 100.0, 1));
		assertEquals(500.0, orden.calcularTotalOrden());
		//assertTrue(50000.0 == orden.calcularTotalOrden());
	}

}
