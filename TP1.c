Ejercicio 1:

Titulo: sumadedosnumeros
Inicio
  int num1, num2, suma
  Mostrar("Ingrese un número entero")
  Leer (num1)
  Mostrar("Ingrese otro número entero")
  Leer (num2)
  suma = num1 + num2
  Mostrar ("El resultado es”)	
  Mostrar (suma)
Fin

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

Ejercicio 2:

Titulo: sumadetresnumerosdeapares
Inicio
  int num1, num2, num3, suma
  Mostrar("Ingrese un número entero")
  Leer (num1)
  Mostrar("Ingrese otro número entero")
  Leer (num2)
  suma = num1 + num2
  Mostrar(“Ingrese un último número entero”)
  Leer (num3)
  suma = suma + num3
  Mostrar ("El resultado es”)	
  Mostrar (suma)
Fin

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

Ejercicio 3:

Titulo: sumadetresnumeros
Inicio
  int num1, num2, num3, suma
  Mostrar("Ingrese un número entero")
  Leer (num1)
  Mostrar("Ingrese otro número entero")
  Leer (num2)
  Mostrar(“Ingrese un último número entero”)
  Leer (num3)
  suma = num1 + num2 + num3
  Mostrar ("El resultado es”)	
  Mostrar (suma)
Fin

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

Ejercicio 4:

Titulo: perimetrodeuntriangulo
Inicio
  int lado1, lado2, lado3, perímetro 
  Mostrar("Ingrese el primer lado del triángulo")
  Leer (lado1)
    Si (lado1 > 0) 
      Mostrar("Ingrese el segundo lado del triángulo")
      Leer (lado2)
      Si (lado2 > 0)
        Mostrar(“Ingrese un último número entero”)
        Leer (lado3)
        Si (lado3 > 0)
          perimetro = lado1 + lado2 + lado3
          Mostrar ("El perímetro del triángulo es”)	
          Mostrar (perimetro)
Fin

#include <iostream>
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
      }
    }
  }
}

Ejercicio 5:

Titulo: triangulorectangulo
Inicio
  int cat1, cat2, hip, perímetro, superficie  
  Mostrar("Ingrese un lado del triángulo")
  Leer (cat1)
  Si (cat1 > 0) 
    Mostrar("Ingrese otro lado del triángulo")
    Leer (cat2)
    Si (cat2 > 0)
      hip = sqrt ((cat1)*2 + (cat2)*2))
      Mostrar(“La hipotenusa es”)
      Mostrar(hip)
      perimetro = cat1 + cat2 + cat3
      Mostrar ("El perímetro del triángulo es”)	
      Mostrar (perimetro)
      Superficie = (cat1 * cat2) / 2
      Mostrar(“La superficie del triángulo es”)
      Mostrar(superficie)
Fin

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
    }
  }
}

Ejercicio 6:

Titulo: calculosdelrectangulo
Inicio
  int base, altura, diagonal, perimetro, superficie  
  Mostrar("Ingrese la base del rectángulo")
  Leer (base)
  Si (base > 0) 
    Mostrar("Ingrese la altura del rectángulo")
    Leer (altura)
    Si (altura > 0)
      diagonal = sqrt(base**2 + altura**2)
      Mostrar(“La diagonal es” )
      Mostrar(diagonal)
      perimetro = base * 2 + altura * 2
      Mostrar ("El perímetro del rectángulo es”)	
      Mostrar (perimetro)
      Superficie = base * altura
      Mostrar(“La superficie del rectángulo es”)
      Mostrar(superficie)
Fin

#include <iostream>
#include <math.h>

int main() {
	int base, altura, diagonal, perimetro, superficie;
	
  printf("Ingrese la base del rect%cngulo: \n", 160);
	scanf("%d", &base);	
	
  if (base > 0) {
	printf("Ingrese la altura del rect%cngulo: \n", 160);
	scanf("%d", &altura);
	  if (altura > 0) {
	    diagonal = sqrt(base * base + altura * altura);
	    printf("La diagonal del rect%cngulo es: %d \n", 160, diagonal);
	    perimetro = base * 2 + altura * 2;
	    printf("El perimetro del rect%cngulo es: %d \n", 160, perimetro);
	    superficie = base * altura;
	    printf("La superficie del rect%cngulo es: %d \n", 160, superficie);
    }
  }
}

Ejercicio 7:

Titulo: operacionescondosnumeros
Inicio
  int num1, num2, suma, producto, resta
  Mostrar("Ingrese un número")
  Leer (num1)
  Mostrar("Ingrese otro número")
  Leer (num2)
  suma = num1 + num2
  producto = num1 * num2
  resta = num1 – num2
  Mostrar ("El resultado de la suma es”)	
  Mostrar (suma)
  Mostrar ("El resultado del producto es”)	
  Mostrar (producto)
  Mostrar ("El resultado de la resta es”)	
  Mostrar (resta)
Fin

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

Ejercicio 8:

Titulo: sueldodelempleado
Inicio
  int valorHora, horasTrabajadas, sueldo
  Mostrar("Ingrese el valor de la hora de trabajo")
  Leer (valorHora)
  Mostrar("Ingrese la cantidad de horas trabajadas")
  Leer (horasTrabajadas)
  sueldo = valorHora * horasTrabajadas 
  Mostrar ("El sueldo del empleado es”)	
  Mostrar (sueldo)
Fin

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

Ejercicio 9:

Titulo: sueldodeloperario
Inicio
  int valorHora = 10
  int horasTrabajadas, sueldo
  Mostrar("Ingrese la cantidad de horas trabajadas")
  Leer (horasTrabajadas)
  sueldo = valorHora * horasTrabajadas 
  Mostrar ("El sueldo del empleado es”)	
  Mostrar (sueldo)
Fin

#include <iostream>
int main() {
	int valorHora = 10;
	int horasTrabajadas, sueldo;
	
  printf("Ingrese la cantidad de horas trabajadas: ");
	scanf("%d", &horasTrabajadas);
	
  sueldo = valorHora * horasTrabajadas;
	printf("El sueldo del empleado es de %d pesos", sueldo);
}

Ejercicio 10:

Titulo: sueldodelvendedor
Inicio
  int precioAuto, autosVendidos, comisionAuto, comisionPorCantidad
  int sueldo = 500
  Mostrar("Ingrese el precio del auto vendido")
  Leer (precioAuto)
  Mostrar(“Ingrese la cantidad de autos vendidos”)
  Leer (autosVendidos)
  comisionAuto = 0.10 * precioAuto 
  comisionPorCantidad = 	50 * autosVendidos
  sueldo = sueldo + comisionAuto + comisionPorCantidad
  Mostrar ("El sueldo del vendedor es”)	
  Mostrar (sueldo)
Fin

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
