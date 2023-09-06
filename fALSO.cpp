#include <iostream>
using namespace std;
int main(){
    int arr[4];
    
    for(int i=0;i<4;i++){
        cout<<i+1<<"-"<<"Ingresa un numero entre 1-10: "<<endl;
        int num;
        cin>>num;
        
        if(num >= 1 && num <= 10){
            *(arr+i) = num;
            cout<<"Correcto"<<endl;
        }
        else{
            cout<<"Error: numero fuera de rango."<<endl;
            i--;//PARA QUE NO AVANCE SI ES UN ERROR Y SIGA PIDIENOD HASTA TENER UNO EN EL RANGO
        }
    }
    
    for(int i=0;i<4;i++){    
        cout<<"Valor de arr: "<<*(arr+i)<<endl;
    }
    cout<<"Valor a donde apunta arr: "<<arr<<endl;
    cout<<"La direccion es: "<<&arr<<endl;

    return 0;
}

