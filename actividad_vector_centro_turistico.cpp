/*En el arreglo h se almacena el número de habitaciones de cada tipo (sencilla o doble) de cada centro turistico. 
Por ejemplo:  en b[1] guarda el número de habitancones sencillas, b[2] guarda el número de habitaciones dobles del centro 1,
b [3] guarda el número de habitaciones secillas del centro 2, b[4] guarda el número de habitaciones dobles del centro 2, 
en el arreglo de tr se almacena el número de restaurantes del centro turistico. Deberá hacer un programa que proporcione la 
sgt información, 
1.El nombre del centro turistico que cuenta con más restaurantes. 
2. El nombre del centro turistico que cuenta con más habitaciones teniendo en cuenta las sencillas y las dobles)
3. Dado el centro turistico con dato informar cuantas habitaciones tiene.
4.El centro turistico que más restaurantes tiene con relación a el número de habitaciones*/
#include <iostream>
#include <conio.h>

using namespace std;

int main (){

setlocale(LC_ALL, "");
int nCT;

cout<<"\nDigite el número de centros turísticos: ";
cin>>nCT;


string CT[nCT];
int H[nCT*2],TR[nCT];
        

//Pedir datos//

for (int i=0;i<nCT;i++){
	cout<<"\nDigite el nombre del centro turistico:  "<<i+1<<": ";
	cin>>CT[i];

	     
	cout<<"\nDigite el número de habitaciones sencillas del centro turístico: "<<i+1<<": ";
	cin>>H[2*i];

	     
	cout<<"\nDigite el número de habitaciones dobles del centro turístico: "<<i+1<<": ";
	cin>>H[2*i+1];
    
    
    cout<<"\nDigite el número de restaurantes del centro turístico: "<<i+1<<": ";
    cin>>TR[i];
  
}
    int pos,mayor=0;
    
    for (int i=0;i<nCT;i++){	
	    if (TR[i]>mayor){
	    	mayor=TR[i];
	    	pos=i;
		}

	}    
	
	cout<<"\nEl centro turístico con más restaurantes:"<<CT[pos]; 
   
   int pos2,mayor2=0;
   
    for (int i=0;i<nCT;i++){
	    if ((H[2*i]+H[2*i+1])>mayor2){
	    	mayor2=(H[2*i]+H[2*i+1]);
	    	pos2=i;
	   }

	}
	
	cout<<"\nEl centro turístico con más habitaciones sencillas y dobles es:"<<CT[pos2]; 
	
	
	string C;
		
	for (int i=0;i<nCT;i++){
	    cout<<"\nDigite el nombre del centro turistico: ";
		cin>>C;
		if (C==CT[i]){
			cout<<"\nTiene de habitaciones sencillas:"<<(H[2*i]);
			cout<<"\nTiene de habitaciones dobles:"<<(H[2*i+1]);
			cout<<"\nY sumado da:"<<(H[2*i]+H[2*i+1]);
		}
	    else{
			cout<<"\nEl nombre del centro turístico no existe."<<C;
		}
	}
	
	

	
	
	
  return 0;

}

