#include <iostream>

using namespace std;

// Función que calcula la media de una muestra de números
float calcularMedia(float* numeros, int tamano) {
	
    float suma = 0.0;
    
    for (int i = 0; i < tamano; i++) {
        suma = suma+numeros[i];
    }
    
    return suma / tamano;
}

int main() {
	
	setlocale(LC_CTYPE, "Spanish");
	
    int tamano;
    
    cout << "Ingrese el tamaño de la muestra: ";
    
    cin >> tamano;

    float* muestra = new float[tamano];
    
    cout << "Ingrese los elementos de la muestra:" << endl;
    
    for (int i = 0; i < tamano; i++) {
        cout << "Digite el elemento " << i + 1 << ": ";
        cin >> muestra[i];
    }

    float media = calcularMedia(muestra, tamano);
    
    cout << "La media de la muestra es: " << media << endl;



    return 0;
}

