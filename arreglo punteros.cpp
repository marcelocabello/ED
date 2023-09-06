#include <iostream>
using namespace std;
int main(){
	int arr[]={1,5,9999};	
	cout<<"Valor de arr: "<<arr+0<<endl;
	cout<<"Valor a donde apunta arr: "<<*(arr+0)<<endl;
	cout<<"La direccion es: "<<&arr+0<<endl;
	
	
	cout<<"Valor de arr: "<<arr+1<<endl;
	cout<<"Valor a donde apunta arr: "<<*(arr+1)<<endl;
	cout<<"La direccion es: "<<&arr+1<<endl;
	
	cout<<"Valor de arr: "<<arr+2<<endl;
	cout<<"Valor a donde apunta arr: "<<*(arr+2)<<endl;
	
	int*ptr=arr;
	cout<<"------------DESPUES-----------------------"<<endl;
	cout<<"Valor de arr: "<<ptr+0<<endl;
	cout<<"Valor a donde apunta arr: "<<*(ptr+0)<<endl;
	cout<<"La direccion es: "<<&ptr+0<<endl;
	
	
	cout<<"Valor de arr: "<<ptr+1<<endl;
	cout<<"Valor a donde apunta arr: "<<*(ptr+1)<<endl;
	cout<<"La direccion es: "<<&ptr+1<<endl;
	
	cout<<"Valor de arr: "<<ptr+2<<endl;
	cout<<"Valor a donde apunta arr: "<<*(ptr+2)<<endl;
	return 0;
}

