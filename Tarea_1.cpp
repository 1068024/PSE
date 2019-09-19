/* Práctica 01:
   Crear un programa en c++ que dados los valores de base, altura y radio. Calcule el área de: 
   
   1. un triángulo equilátero.
   2. un rectángulo.
  
   Calcule el volumen de:
   
   3. un cono.
   4. un cilindro.
   
   Según corresponda los valores resultantes deben desplezarse en pantalla.
   
   Entrega: Proximo martes antes de las 10:59 AM
   Asunto: PROG_PO1_1068024
   Adjunto: .cpp
*/

#include<iostream>
#include<math.h> /* Esta librería me permitirá usar unas funciones matemáticas que nos ayudan al momento de aplicar una raíz cuadrada, elevar un numero y
                    usar el valor de pi. Estas serán presentadas mas adelante. */

using namespace std;

int main(){
	float base, altura, radio;
	float area_triangulo = 0, area_rectangulo = 0, volumen_cono = 0, volumen_cilindro = 0;
	
	cout<<"\tDigite los siguientes valores:"<<endl;
	cout<<"\nDigite el valor de la base: "; cin>>base;
	cout<<"\nDigite el valor de la altura: "; cin>>altura;
	cout<<"\nDigite el valor de la radio: "; cin>>radio;
	
	area_triangulo = (sqrt(3)*pow(base,2))/4; /* Aquí podemos ver la función sqrt que nos permite sacar la raíz cuadrada de un número, también está pow
	                                             que sirve para elevar un número al valor que uno desee, esta se usa de la siguiente manera, tenemos
												 que pow(x,y), donde (x) es el numero que desea elevar y (y) al número que desea elevarlo. */
	area_rectangulo = (base)*(altura);        
	volumen_cono = ((M_PI)*pow(radio,2)*(altura))/(3); // M_PI es la última función que usamos de la librería math.h, este es el número pi que equivales a 3.14.
	volumen_cilindro = (M_PI)*pow(radio,2)*(altura);
	
	cout<<"\n1. El area del triangulo equilatero es: "<<area_triangulo;
	cout<<"\n2. El area del rectangulo es: "<<area_rectangulo;
	cout<<"\n3. El volumen del cono es: "<<volumen_cono;
	cout<<"\n4. El volumen del cilindro es: "<<volumen_cilindro;
	
	return 0;
}

// Creado por JORGE IGNACIO REYES RODRIGUES, ID = 1068024
