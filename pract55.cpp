#include <iostream>
using namespace std;
int main(){
    int arr[4];
    
    for(int i=0;i<4;i++){
        cout<<i+1<<"-"<<" Ingresa un numero entre 1-10: "<<endl;
        cin>>*(arr+i);
        
        if(*(arr+i) >= 1 && *(arr+i) <= 10){
            cout<<"Dentro del rango"<<endl;
        }
        else{
            cout<<"Error: numero fuera de rango."<<endl;
            i--;//i-- para que no avance el contador hasta que sea un numero valido
        }
        
    }
    
    for(int i=0;i<4;i++){    
        cout<<"Valor de arr: "<<*(arr+i)<<endl;
    }
    cout<<"Valor a donde apunta arr: "<<arr<<endl;
    cout<<"La dirección es: "<<&arr<<endl;

    return 0;
}

