// clase_30.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "clase_30.h"
#include <string>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Único objeto de aplicación

CWinApp theApp;

using namespace std;

class Persona{
private:
	char nombre[30];
	int edad;
	char sexo;
public:
	Persona::Persona(char [30], int, char);
	Persona::Persona(char [30]);
	void mostrar_datos();
	void set_nombre(char [30]);
	void set_edad(int);
	void set_sexo(char);
///////////////////////////////////////
	char get_nombre(char[30]);
	int get_edad(int);
	char get_sexo(char);

};
Persona::Persona(char _nombre[30], int _edad, char _sexo){
	nombre[30] = _nombre[30];
	edad = _edad;
	sexo = _sexo;
}
Persona::Persona( char _get_nombre[30]){
	nombre[30] = _get_nombre[30];
}
//////////////Setter//////////////
void Persona::set_nombre(char _nombre[30]){
	cout << "Introduce el nombre de la persona: ";
	cin.getline(_nombre, 30, '\n');
	nombre[30] = _nombre[30];
}
void Persona::set_edad(int _edad){
	cout << "Introduce la edad de la persona: ";
	cin >> _edad;
	edad = _edad;
}
void Persona::set_sexo(char _sexo){
	cout << "Introduce el sexo de la persona m/f: ";
	cin >> _sexo;
	sexo = _sexo;
}
////////////////////Getter////////////////
char Persona::get_nombre(char _nombre[30]){
	return nombre[30];
}
int Persona::get_edad(int _edad){
	return edad;
}
char Persona::get_sexo(char _sexo){
	return sexo;
}

void Persona::mostrar_datos(){
	cout << "Nombre: " << nombre[30] << "\nEdad: " << edad << "\nSexo: " << sexo << endl;
}

int main(){

	

	Persona persona1();
    
	persona1.set_nombre;
	persona1.mostrar_datos();

	system("pause");
	return 0;
}
