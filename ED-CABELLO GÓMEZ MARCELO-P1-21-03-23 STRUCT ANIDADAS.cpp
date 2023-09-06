#include <iostream>
#include <conio.h>
using namespace std;

struct Fecha{
	int dia,mes,anio;
};
struct Persona{
	char nombre[20];
	int edad,peso;
	Fecha fecha;
}persona={"Cindy",20,60,3,2,2022};

struct empleado{
	Persona persona;
	int salario;
}trabajador={"CIndy2",20,60,3,2,2022,15000};

int main(){
	cout<<"Persona Nombre: "<<persona.nombre<<endl;
	cout<<"Edad: "<<persona.peso<<endl;
	cout<<"Dia de nacimiento: "<<persona.fecha.dia<<endl;
	cout<<"Mes de nacimiento: "<<persona.fecha.mes<<endl;
	cout<<"Anio de nacimiento: "<<persona.fecha.anio<<endl;
	cout<<"\n\n--------TRABAJADOR----------"<<endl;
	cout<<"\n Trabajador: "<<trabajador.persona.nombre<<endl;
	cout<<"Edad: "<<trabajador.persona.edad<<endl;
	cout<<"Peso: "<<trabajador.persona.peso<<endl;
	cout<<"Dia de nacimiento: "<<trabajador.persona.fecha.dia<<endl;
	cout<<"Mes de nacimento: "<<trabajador.persona.fecha.mes<<endl;
	cout<<"Anio de nacimiento: "<<trabajador.persona.fecha.anio<<endl;
	cout<<"Salario: "<<trabajador.salario<<endl;
	return 0;
}
