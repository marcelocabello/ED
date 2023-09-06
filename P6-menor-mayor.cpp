#include <iostream>
using namespace std;

int main(){
	
    int arr[3];
    int may[3] = {0};
    int men [3] = {0};
    int err [3] = {0};
    int comay = 0, comen = 0, coerr = 0;
    int*ptr_comay= &comay;
    int*ptr_comen = &comen;
    int*ptr_coerr= &coerr;
    
    
    for(int i=0; i<3; i++){
        cout << i+1 << "- Ingresa un numero entre 1-50: " << endl;
        cin >> *(arr+i);
        
        if(*(arr+i) >= 1 && *(arr+i) <= 50){
            if(*(arr+i) >= 18){
                *(may+i) = *(arr+i);
                (*ptr_comay)++;
            }
            else{
                *(men+i) = *(arr+i);
                (*ptr_comen)++;
            }
        }
        else{
            cout << "Error: numero fuera de rango." << endl;
            *(err+i) = *(arr+i);
            (*ptr_coerr)++;
            i--;
        }
    }
    
    cout << "Numeros mayores a 18:" << endl;
    for(int i=0; i<3; i++){
        if(*(may+i) != 0){
            cout << *(may+i) << endl;
        }
        else{
            cout << "0" << endl;
        }
    }
    
    cout << "Numeros menores a 18:" << endl;
    for(int i=0; i<3; i++){
        if(*(men+i) != 0){
            cout << *(men+i) << endl;
        }
        else{
            cout << "0" << endl;
        }
    }
    
    cout << "Errores:" << endl;
    for(int i=0; i<3; i++){
        if(*(err+i) != 0){
            cout << *(err+i) << endl;
        }
        else{
            cout << "0" << endl;
        }
    }
    
    cout << "Cantidad de numeros mayores a 18: " << (*ptr_comay)<< endl;
    cout << "Cantidad de numeros menores a 18: " << (*ptr_comen)<< endl;
    cout << "Cantidad de errores: " << (*ptr_coerr)<< endl;
    
    return 0;
}

