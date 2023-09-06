#include <iostream>
using namespace std;
int main(){
    int arr[3];
    
    for(int i=0;i<4;i++){
        cout<<i+1<<"-"<<" Ingresa un numero entre 1-10: "<<endl;
        cin>>*(arr+i);
        
        if(*(arr+i) >= 1 && *(arr+i)<= 10){
            
            int j=0;
            while(j<i && *(arr+j) != *(arr+i)){
                j++;
            }
            if(j == i){
                cout<<"Correcto"<<endl;
            }
            else{
                cout<<"Error: numero repetido."<<endl;
                i--;
            }
        }
        else{
            cout<<"Error: numero fuera de rango."<<endl;
            i--;
        }
        
    }
   cout<<"-------------------------------------------------------\n"; 
    for(int i=0;i<4;i++){    
        cout<<"Valor de arr: "<<*(arr+i)<<endl;
    }
    cout<<"Valor a donde apunta arr: "<<arr<<endl;
    cout<<"La direccion es: "<<&arr<<endl;

    return 0;
}

