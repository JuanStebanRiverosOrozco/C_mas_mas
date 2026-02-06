#include <iostream>
using namespace std;

int main(){
	int n;
	int d=0;
	cout<<" Digite un numero: ";
	cin>>n;
	for (int i=1; i<n; i++){
		if (n%i==0)
			d+=i;
	}
	if (n==d){
		cout<<"\n"<<n<<" Es perfecto";
	}
	else{
		cout<<"\n"<<n<<" No es perfecto";
	}
}
