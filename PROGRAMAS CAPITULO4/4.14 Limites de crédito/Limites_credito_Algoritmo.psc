Algoritmo Limites_credito_Algoritmo
	Definir cuenta, saldoInicial, cargosTotales, creditosTotales, limiteCredito, nuevoSaldo Como Real
	Definir continuar Como Cadena
	Escribir 'Introduzca el numero de cuenta (o -1 para salir): '
	Leer cuenta
	Mientras cuenta<>-1 Hacer
		Escribir 'Introduzca el saldo inicial: '
		Leer saldoInicial
		Escribir 'Introduzca los cargos totales: '
		Leer cargosTotales
		Escribir 'Introduzca los creditos totales: '
		Leer creditosTotales
		Escribir 'Introduzca el limite de credito: '
		Leer limiteCredito
		nuevoSaldo <- saldoInicial+cargosTotales-creditosTotales
		Si nuevoSaldo>limiteCredito Entonces
			Escribir 'El nuevo saldo es ', nuevoSaldo
			Escribir 'Cuenta: ', cuenta
			Escribir 'Limite de credito: ', limiteCredito
			Escribir 'Saldo: ', nuevoSaldo
			Escribir 'Se excedio el limite de su credito.'
		SiNo
			Escribir 'El nuevo saldo es ', nuevoSaldo
		FinSi
		Escribir 'Introduzca el numero de cuenta (o -1 para salir): '
		Leer cuenta
	FinMientras
FinAlgoritmo
