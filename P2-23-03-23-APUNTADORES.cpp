#include <iostream>
using namespace std;
int main(){
	int n,*dir_n;
	n=20;
	dir_n=&n;
	cout<<"Numero: "<<n<<endl;
	cout<<"Direccion de men de n: "<<&n<<endl;
	cout<<"Numero: "<<*dir_n<<endl;
	cout<<"Direccion de memoria de n: "<<dir_n<<endl;
	cout<<"Direccion de mem dir_n: "<<&dir_n<<endl;
	return 0;
}
