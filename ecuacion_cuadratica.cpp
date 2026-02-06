#include <iostream>
#include <cmath>

using namespace std;

int main (){
	
	double a, b, c;
	
	cout<<"digite el numero a: ";
	cin>>a;
	cout<<"digite el numero b: ";
	cin>>b;
	cout<<"digite el numero c: ";
	cin>>c;
	
	double ecuacion_x1, ecuacion_x2;
	
	ecuacion_x1 = (((-1)*b)+(sqrt(pow(b,2))-4*a*c)/(2*a));
	ecuacion_x2 = (((-1)*b)-(sqrt(pow(b,2))-4*a*c)/(2*a));
	
	cout<<"el resultado de x1 es "<<ecuacion_x1<<"y de x2 es "<<ecuacion_x2;
	
	return 0;
}
