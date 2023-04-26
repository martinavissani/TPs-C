// Resolución:

// ANALISIS:

// Datos de Entrada:
//                  •	Valor de la hora (valorHora)
//                  •	Cantidad de horas trabajadas (cantHoras)
//                  •	Número de empleado (legajo)
// Proceso:
//                  •	sueldo = cantHoras * valorHora
// Salida:
//                  •	Sueldo (sueldo)

// PSEUDOCÓDIGO:

// Comienzo
//  Ingresar "el nro de empleado"
//  Leer legajo
//  Ingresar "la cantidad de horas"
//  Leer cantHoras
//  Ingresar "el valor de la hora"
//  Leer valorHora
//  sueldo = cantHoras * valorHora
//  Imprimir "El empleado, legajo, cobra, sueldo, pesos"
// Fin

// CÓDIGO: 

#include <iostream>

int main() {
	int legajo=0;
	int cantHoras=0;
	int valorHora=0;
	int sueldo = 0;
	
	printf("Ingrese el nro de empleado: \n");
	scanf("%d", &legajo);
	
	printf("Ingrese la cantidad de horas: \n");
	scanf("%d", &cantHoras);
	
	printf("Ingrese el valor de la hora: \n");
	scanf("%d", &valorHora);
	
	sueldo = cantHoras * valorHora;
	printf("El empleado %d cobra un sueldo de %d pesos", legajo, sueldo);
}

