Ejercicio 1: Ingresar dos valores, indicar e imprimir si son iguales

#include <stdio.h>
#include <stdlib.h>
int main() {
	int num1, num2;
	
  printf("Ingrese un n%cmero: ", 163);
	scanf("%d", &num1);
	
  printf("Ingrese otro n%cmero: ", 163);
	scanf("%d", &num2);
	
  if (num1 == num2) {
		printf("Los n%cmeros ingresados son iguales", 163);
  }
}

Ejercicio 2: Ingresar un valor indicar e imprimir si es positivo, negativo o cero

#include <stdio.h>
#include <stdlib.h>
int main() {
	int num;
	
  printf("Ingrese un n%cmero: ", 163);
	scanf("%d", &num);
	
  if (num > 0) {
		printf("El n%cmero ingresado es positivo", 163);
	}
	
  else if (num < 0) {
		printf("El n%cmero ingresado es negativo", 163);
	}
	
  else {
		printf("El n%cmero ingresado es cero", 163);
	}
}

Ejercicio 3: Ingresar dos valores y realizar e imprimir el producto (multiplicación) si el 1ro es mayor al 2do, si son iguales solo indicarlo.

#include <stdio.h>
#include <stdlib.h>
int main() {
	int num1, num2, producto;
	
  printf("Ingrese un n%cmero: ", 163);
	scanf("%d", &num1);
	
  printf("Ingrese otro n%cmero: ", 163);
	scanf("%d", &num2);
	
  if (num1 > num2) {
		producto = num1 * num2;
		printf("El producto de los n%cmeros es: %d", 163, producto);
	}
	
  else if (num1 == num2) {
		printf("Los n%cmeros son iguales", 163);
	} 
}

Ejercicio 4: Ingresar dos valores y realizar e imprimir la resta del mayor menos el menor

#include <stdio.h>
#include <stdlib.h>
int main() {
	int num1, num2, resta;
	
  printf("Ingrese un n%cmero: ", 163);
	scanf("%d", &num1);
	
  printf("Ingrese otro n%cmero: ", 163);
	scanf("%d", &num2);
	
  if (num1 > num2) {
		resta = num1 - num2;
		printf("La resta de los n%cmeros es: %d", 163, resta);
	}
	
  else if (num2 > num1) {
		resta = num2 - num1;
		printf("La resta de los n%cmeros es: %d", 163, resta);
	}
}

Ejercicio 5: Ingresar los tres lados de un triángulo e indicar que tipo de triángulo es

#include <stdio.h>
#include <stdlib.h>
int main() {
	int lado1, lado2, lado3;
	
  printf("Ingrese el primer lado del tri%cngulo: ", 160);
	scanf("%d", &lado1);
	
  printf("Ingrese el primer lado del tri%cngulo: ", 160);
	scanf("%d", &lado2);
	
  printf("Ingrese el primer lado del tri%cngulo: ", 160);
	scanf("%d", &lado3);
	
  if (lado1 == lado2 && lado2 == lado3 && lado1 == lado3) {
		printf("El tri%cngulo es equilatero", 160);
	}
	
  else if (lado1 == lado2 && lado2 != lado3 && lado1 != lado3) {
		printf("El tri%cngulo es is%csceles", 160, 162);
	}
	
  else if (lado2 == lado3 && lado1 != lado2 && lado1 != lado3) {
		printf("El tri%cngulo es is%csceles", 160, 162);
	}
	
  else if (lado1 == lado3 && lado2 != lado1 && lado2 != lado3) {
		printf("El tri%cngulo es is%csceles", 160, 162);
	}
	
  else {
		printf("El tri%cngulo es escaleno", 160);
	}
}

Ejercicio 6: Ingresar la edad y la altura de dos personas, indicar e imprimir la estatura del de mayor edad. Indicar si son iguales.

#include <stdio.h>
#include <stdlib.h>
int main() {
	int edad1, altura1, edad2, altura2;
	
  printf("Ingrese la edad de la primera persona: ");
	scanf("%d", &edad1);
	
  printf("Ingrese la altura de la primera persona: ");
	scanf("%d", &altura1);
	
  printf("Ingrese la edad de la segunda persona: ");
	scanf("%d", &edad2);
	
  printf("Ingrese la altura de la segunda persona: ");
	scanf("%d", &altura2);
	
  if (edad1 > edad2) {
		printf("La altura de la persona mayor es: %d", altura1);
	}
	else if (edad2 > edad1) {
		printf("La altura de la persona mayor es: %d", altura2);
	}
	else {
		printf("Las edades son iguales");
	}
}

Ejercicio 7: Ingresar el valor de la hora y el tiempo trabajado por un empleado, calcular su sueldo conociendo que recibe un premio de $ 100 si trabajo más de 50 hs y si trabajo más de 150 hs le dan otros $ 100 adicionales. Imprimir el sueldo

#include <stdio.h>
#include <stdlib.h>
int main() {
	int valorHora, horasTrabajadas, sueldo;
	
  printf("Ingrese el valor de la hora: ");
	scanf("%d", &valorHora);
	
  printf("Ingrese la cantidad de horas de trabajo: ");
	scanf("%d", &horasTrabajadas);
	
  sueldo = valorHora * horasTrabajadas;
	
  if (horasTrabajadas <= 50) {
		printf("El sueldo del empleado es: $%d", sueldo);
	}
	
  else if (horasTrabajadas > 50 && horasTrabajadas <= 150) {
		printf("El sueldo del empleado es: $%d", sueldo + 100);
	}
	
  else {
		printf("El sueldo del empleado es: $%d", sueldo + 200);
	}
}

Ejercicio 8: Ingresar tres valores correspondientes al día, mes y año de una fecha, indicar si es válida, considerar los años bisiestos 

#include <stdio.h>
#include <stdlib.h>
int main() {
	int dia, mes, anio, bisiesto;
	
  printf("Ingrese un d%ca: ", 161);
	scanf("%d", &dia);
	
  printf("Ingrese un mes: ");
	scanf("%d", &mes);
	
  printf("Ingrese un a%co: ", 164);
	scanf("%d", &anio);
	
  bisiesto = anio % 4;
	
  if (bisiesto == 0) {
		if (mes == 1 || mes == 3 || mes == 5 || mes == 7) {
				if (dia >= 01 && dia <= 31) {
					printf("La fecha ingresada es v%clida", 160);
				}
		}
		else if (mes == 8 || mes == 10 || mes == 12) {
		  if (dia >= 01 && dia <= 31) {
				printf("La fecha ingresada es v%clida", 160);
			}
		}
		else if (mes == 2) {
		  if (dia >= 01 && dia <= 29) {
				printf("La fecha ingresada es v%clida", 160);
			}
		}
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
		  if (dia >= 01 && dia <= 30) {
				printf("La fecha ingresada es v%clida", 160);
			}
		}
	}
  
	if (bisiesto != 0) {
		if (mes == 1 || mes == 3 || mes == 5 || mes == 7) {
			if (dia >= 01 && dia <= 31) {
					printf("La fecha ingresada es v%clida", 160);
			}
		}
		else if (mes == 8 || mes == 10 || mes == 12) {
			if (dia >= 01 && dia <= 31) {
					printf("La fecha ingresada es v%clida", 160);
			}
		}
		else if (mes == 2) {
		  if (dia >= 01 && dia <= 28) {
				printf("La fecha ingresada es v%clida", 160);
			}
		}
		else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
		  if (dia >= 01 && dia <= 30) {
				printf("La fecha ingresada es v%clida", 160);
			}
		}
	}
}

Ejercicio 9: Ingresar el sueldo, categoría y antigüedad de un empleado, calcular el sueldo final de cada uno de ellos, si el empleado es de la categoría 1 se le adicionara $50 por cada año de antigüedad

#include <stdio.h>
#include <stdlib.h>
int main() {
	int sueldo, categoria, antiguedad, sueldoFinal;
	
  printf("Ingrese el sueldo base: ");
	scanf("%d", &sueldo);
	
  printf("Ingrese la categoria del empleado: ");
	scanf("%d", &categoria);
	
  printf("Ingrese la antiguedad del empleado: ");
	scanf("%d", &antiguedad);
	
	if (categoria == 1) {
		sueldoFinal = sueldo + 50 * antiguedad;
		printf("El sueldo final del empleado es $%d", sueldoFinal);
	}
  
	else {
		printf("El sueldo final del empleado es $%d", sueldo);
	}
}

Ejercicio 10: Sobre los datos del ejercicio anterior imprimir los sueldos de los empleados con más de 5 años de antigüedad

#include <stdio.h>
#include <stdlib.h>
int main() {
	int sueldo, categoria, sueldoFinal;
	int antiguedad = 5;
  
	printf("Ingrese el sueldo base: ");
	scanf("%d", &sueldo);
	
  printf("Ingrese la categoria del empleado: ");
	scanf("%d", &categoria);
	
	if (categoria == 1) {
		sueldoFinal = sueldo + 50 * antiguedad;
		printf("El sueldo final del empleado es $%d", sueldoFinal);
	}
  
	else {
		printf("El sueldo final del empleado es $%d", sueldo);
	}
}

Ejercicio 11: Ingresar las horas trabajadas por un empleado y su categoría, calcular su sueldo sabiendo que los empleados de la categoría 1 cobran $50, la 2 cobra $ 70 y la 3 cobra $ 80

#include <stdio.h>
#include <stdlib.h>
int main() {
	int horasTrabajadas, categoria, sueldoFinal;
	
  printf("Ingrese las horas trabajadas: ");
	scanf("%d", &horasTrabajadas);
	
  printf("Ingrese la categoria del empleado: ");
	scanf("%d", &categoria);
	
  if (categoria == 1) {
		sueldoFinal = horasTrabajadas * 50;
		printf("El sueldo final del empleado es $%d", sueldoFinal);
	}
  
  else if (categoria == 2) {
		sueldoFinal = horasTrabajadas * 70;
		printf("El sueldo final del empleado es $%d", sueldoFinal);
	}
	
  else if (categoria == 3) {
		sueldoFinal = horasTrabajadas * 80;
		printf("El sueldo final del empleado es $%d", sueldoFinal);
	}
}
