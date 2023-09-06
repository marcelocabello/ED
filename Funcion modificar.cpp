#include <iostream>
#include <conio.h>
using namespace std;
void num(int&,int&);
int main(){
	int num1,num2;
	cout<<"Dame los dos numeros: ";
	cin>>num1>>num2;
	num(num1,num2);
	cout<<"Dame el nuevo valor del primer numero: "<<num1<<endl;
	cout<<"Dame el nuevo valor del segundo numero: "<<num2<<endl;
	getch();
	return 0;
}
void num(int& n1,int& n2){
	cout<<"El primer numero es: "<<n1<<endl;
	cout<<"El segundo numero es: "<<n2<<endl;
	n1=8;
	n2=7;
}
