#include <iostream>
using namespace std;


/*
//1.
int pow(int a, int b){
	int cont1=1;
	
	for(int i=0;i<b;i++){
		cont1=cont1*a;
		
	}
	return cont1;
}

int main(int argc, char *argv[]) {
	int a,b;
	cout<<"ingrese base de la potencia"<<endl;
	cin>>a;
	cout<<"ingrese exponente de la potencia"<<endl;
	cin>>b;
	
	cout<<"la potencia seria : "<<pow(a,b);
	
	return 0;
}
*/


/*
//2.
bool bisiesto(int n){
	if(n%4==0 || n%100==0 || n%400==0){
		return true;
	}
	else;
	   return false;
	
}
int main(){
	int a;
	cout<<"Ingrese un Año para saber si es bisiesto"<<endl;
	cin>>a;
	if(bisiesto(a)==true)
		cout<<"año es bisiesto"<<endl;
	else if(bisiesto(a)==false)
		cout<<"año no es bisiesto"<<endl;
	else
		cout<<"ingrese un año correcto"<<endl;
	
	return 0;
	
}
*/


/*
//3.
#include <cmath>
void edad(int da,int ma, int aa, int d, int m , int a){
	cout<<abs(a-aa)<<" años, ";
	cout<<abs(m-ma)<<" meses, ";
	cout<<abs(d-da)<<" dias. ";
	
}

int main(){
	int da,ma,aa;
	int d,m,a;
	cout<<"ingrese fecha nacimento "<<endl;
	cout<<"ingrese dia : ";
	cin>>da;
	cout<<"ingrese mes : ";
	cin>>ma;
	cout<<"ingrese año : ";
	cin>>aa;
	cout<<"ingrese fecha actual "<<endl;
	cout<<"ingrese dia : ";
	cin>>d;
	cout<<"ingrese mes : ";
	cin>>m;
	cout<<"ingrese año : "; 
	cin>>a;
	edad(da,ma,aa,d,m,a);
	return 0;
}
*/


/*
//4.
int divi(int a){
	int cont;
	int b=0;
	for(int i=1;i<a;i++){
		cont=a%i;
		if(cont==0){
			b++;
		}
	}
	return b;
}
	
	int main(int argc, char *argv[]) {
		int x;
		cout<<"ingrese valor de x  "<<endl;
		cin>>x;
		for(int i=0;i<x;i++){
			if(divi(i)==1)
				cout<<i<<" ";
		}
		return 0;
	}
*/




/*
//5.
int opc1(int a){
	if(a>0 && a<100){
		return 1;
		
	}
	else
	   return 0;
	
}
	
int opc2(int a){
	if(a%2==0)
		return 1;
	else
		return 0;
}

int impares(int n){
	int c=0;
	for(int i=0;i<n;i++){
		if(i%2!=0){
			c=c+i;
		}
	}
	return c;
	
}
int main(){
	int n;
	cout<<"ingrese numero : ";
	cin>>n;
	while(opc1(n)==0 || opc2(n)==0){
		cout<<"ingrese numero entre 1 y 100 y par"<<endl;
		cin>>n;
	}
	
	cout<<"suma de impares "<<impares(n);
	
	
	return 0;
	
}
*/


	

