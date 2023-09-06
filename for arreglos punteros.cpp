#include <iostream>
using namespace std;
int main(){
	int arr[4];
	
	for(int i=1;i<5;i++){
		
	cout<<"i-Dame el un numero entre 1-10: "<<endl;
	cin>>*(arr+i);
}
	for(int i=0;i<4;i++){	
	cout<<"Valor de arr: "<<arr+i<<endl;
}
	cout<<"Valor a donde apunta arr: "<<*(arr+i)<<endl;
	cout<<"La direccion es: "<<&arr+i<<endl;

return 0;
}

