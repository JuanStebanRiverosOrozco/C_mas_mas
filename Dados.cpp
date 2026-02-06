/*Escribir un programa, en lenguaje C++, que:
1o) Pida por teclado el resultado (dato entero) obtenido al lanzar un dado de
seis caras.
2o) Muestre por pantalla el número en letras (dato cadena) de la cara
opuesta al resultado obtenido.
Nota 1: En las caras opuestas de un dado de seis caras están los números:
1-6, 2-5 y 3-4.
Nota 2: Si el número del dado introducido es menor que 1 ó mayor que 6,
se mostrará el mensaje: "ERROR: Número incorrecto.".*/
#include <iostream>

using namespace std;

int main (){
	
	int a;
	
	cout<<"\nIngrese un Numero: ";
	cin>>a;
	
	switch (a){
		case 1:
			cout<<"\nSeis";
			break;
		case 2:
			cout<<"\ncinco";
			break;
		case 3:
			cout<<"\ncuatro";
			break;
		case 4:
			cout<<"\ntres";
			break;
		case 5:
			cout<<"\ndos";
			break;
		case 6:
			cout<<"\nuno";
			break;
			
		default:
			cout<<"\nERROR no existe";
	}
	
	
	
	
	return 0;
}
