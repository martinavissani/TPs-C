//EJERCICIO 1:

#include <iostream>

int main() {
	int num1, num2, suma;
  
	printf("Ingrese un n%cmero: \n", 163);
	scanf("%d", &num1);
  
	printf("Ingrese otro n%cmero: \n", 163);
	scanf("%d", &num2);
  
	suma = num1 + num2;
	printf("El resultado es %d", suma);
}

// EJERCICIO 2:

#include <iostream>

int main() {
	int num1, num2, num3, suma;
  
	printf("Ingrese un n%cmero: \n", 163);
	scanf("%d", &num1);
  
	printf("Ingrese otro n%cmero: \n", 163);
	scanf("%d", &num2);
  
	suma = num1 + num2;
	
  printf("Ingrese un %cltimo n%cmero: \n", 163, 163);
	scanf("%d", &num3);
	
  suma = suma + num3;
	printf("El resultado es %d", suma);
}

// EJERCICIO 3: 

#include <iostream>

int main() {
	int num1, num2, num3, suma;
	
  printf("Ingrese un n%cmero: \n", 163);
	scanf("%d", &num1);
	
  printf("Ingrese otro n%cmero: \n", 163);
	scanf("%d", &num2);
	
  printf("Ingrese un %cltimo n%cmero: \n", 163, 163);
	scanf("%d", &num3);
	
  suma = num1 + num2 + num3;
	printf("El resultado es %d", suma);
}

// EJERCICIO 4:

int main() {
	int lado1, lado2, lado3, perimetro;
	
  printf("Ingrese el primer lado del tri%cngulo: \n", 160);
	scanf("%d", &lado1);
	
  if (lado1 > 0){
	printf("Ingrese el segundo lado del tri%cngulo: \n", 160);
	scanf("%d", &lado2);
	  if (lado2 > 0) {
	                  printf("Ingrese el tercer lado del tri%cngulo: \n", 160);
	                  scanf("%d", &lado3);
	                  if (lado3 > 0) {
	                                  perimetro = lado1 + lado2 + lado3;
	                                  printf("El per%cmetro del tri%cgulo es %d", 161, 160, perimetro);
}}}}

// EJERCICIO 5: 

#include <iostream>
#include <math.h>

int main(int argc, char const *argv[]) {
	int cat1, cat2, hip, perimetro, superficie;
	
  printf("Ingrese un lado del tri%cngulo: \n", 160);
	scanf("%d", &cat1);	
	
  if (cat1 > 0){
	printf("Ingrese otro lado del tri%cngulo: \n", 160);
	scanf("%d", &cat2);
    if (cat2 > 0) {
	                  hip = sqrt(pow(cat1, 2) + pow(cat2, 2));
	                  printf("La hipotenusa del tri%cngulo rect%cngulo es: %d", 160, 160, hip);
}}}

// EJERCICIO 6:

#include <iostream>
#include <math.h>

int main() {
	int base, altura, diagonal, perimetro, superficie;
  
	printf("Ingrese la base del rect%cngulo: \n", 160);
	scanf("%d", &base);	
	
  if (base > 0){
	printf("Ingrese la altura del rect%cngulo: \n", 160);
	scanf("%d", &altura);
    if (altura > 0) {
	                    diagonal = sqrt(base * base + altura * altura);
	                    printf("La diagonal del rect%cngulo es: %d \n", 160, diagonal);
	                    perimetro = base * 2 + altura * 2;
	                    printf("El perimetro del rect%cngulo es: %d \n", 160, perimetro);
	                    superficie = base * altura;
	                    printf("La superficie del rect%cngulo es: %d \n", 160, superficie);
}}}

// EJERCICIO 7:

#include <iostream>

int main() {
	int num1, num2, suma, producto, resta;
	
  printf("Ingrese un n%cmero: \n", 163);
	scanf("%d", &num1);
	
  printf("Ingrese otro n%cmero: \n", 163);
	scanf("%d", &num2);
	
  suma = num1 + num2;
	producto = num1 * num2;
	resta = num1 - num2;
	printf("El resultado de la suma es %d \n", suma);
	printf("El resultado del producto es %d \n", producto);
	printf("El resultado de la resta es %d \n", resta);
}

// EJERCICIO 8:

#include <iostream>

int main() {
	int valorHora, horasTrabajadas, sueldo;
  
	printf("Ingrese el valor de la hora de trabajo: ");
	scanf("%d", &valorHora);
  
	printf("Ingrese la cantidad de horas trabajadas: ");
	scanf("%d", &horasTrabajadas);
	
  sueldo = valorHora * horasTrabajadas;
	printf("El sueldo del empleado es de %d pesos", sueldo);
}

// EJERCICIO 9:

#include <iostream>
int main() {
	int valorHora = 10;
	int horasTrabajadas, sueldo;
	
  printf("Ingrese la cantidad de horas trabajadas: ");
	scanf("%d", &horasTrabajadas);
	
  sueldo = valorHora * horasTrabajadas;
	printf("El sueldo del empleado es de %d pesos", sueldo);
}

// EJERCICIO 10:

#include <iostream>
int main() {
	int sueldo = 500;
	int precioAuto, autosVendidos, comisionAuto, comisionPorCantidad;
	
  printf("Ingrese el precio del auto vendido: ");
	scanf("%d", &precioAuto);
	
  printf("Ingrese la cantidad de autos vendidos: ");
	scanf("%d", &autosVendidos);
	
  comisionAuto = 0.10 * precioAuto;
	comisionPorCantidad = 50 * autosVendidos;
	
  sueldo = sueldo + comisionAuto + comisionPorCantidad;
	printf("El sueldo del vendedor es de %d pesos", sueldo);
}
