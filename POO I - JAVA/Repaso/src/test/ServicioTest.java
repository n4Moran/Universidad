package test;

import static org.junit.Assert.assertEquals;
import static org.junit.jupiter.api.Assertions.*;

import java.time.LocalDate;

import org.junit.jupiter.api.Test;

import main.Servicio;

public class ServicioTest {

	@Test
	public void verificarFechaDeInicio() {
		Servicio ser = new Servicio();
		assertEquals(LocalDate.MAX, ser.getFechaInicio());
		ser.setFechaInicio(LocalDate.MIN);
		assertEquals(LocalDate.MIN, ser.getFechaInicio());
		ser.setFechaInicio(LocalDate.EPOCH);
		assertEquals(LocalDate.of(1970, 01, 01),ser.getFechaInicio());
	}

}
