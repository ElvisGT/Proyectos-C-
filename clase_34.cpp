// clase_34.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "clase_34.h"
#include "Empresa.h"
#include <string>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Único objeto de aplicación

CWinApp theApp;

using namespace std;
void pedir();
void mostrar(Empresa *empresa[2],float);
void mostrar_ordenado(Empresa *empresa[2]);

float promedio;
int _respuesta;
string aNombre, aDireccion;
long aTelefono;
double aPlan_produccion, aProduccion_real;
Empresa *empresa[2];
int main(){
	
	
	pedir();
	mostrar(empresa,promedio);
	mostrar_ordenado(empresa);
	
	for (int i = 0; i < 2; i++){
		_respuesta+=empresa[i]->cumplidores_plan(aProduccion_real,aPlan_produccion);
	}
	promedio = _respuesta / 2;
		cout << "El promedio de las empresas que cumplieron o sobre sobrecumplieron el plan de produccion es " << promedio << endl;
	cout << endl;


	system("pause");
	return 0;
}
void pedir(){
	for (int i = 0; i < 2; i++){
		cout << "Introduce el nombre de la empresa " << i + 1 << ": ";
		cin >> aNombre;

		cout << "Introduce la direccion de la empresa " << i + 1 << ": ";
		cin >> aDireccion;

		cout << "Introduce el telefono de la empresa " << i + 1 << ": ";
		cin >> aTelefono;

		cout << "Introduce el plan de produccion de la empresa " << i + 1 << ": ";
		cin >> aPlan_produccion;

		cout << "Introduce la produccion real de la empresa " << i + 1 << ": ";
		cin >> aProduccion_real;

		empresa[i] = new Empresa();
		empresa[i]->setNombre(aNombre);
		empresa[i]->setDireccion(aDireccion);
		empresa[i]->setTelefono(aTelefono);
		empresa[i]->setPlan_produccion(aPlan_produccion);
		empresa[i]->setProduccion_real(aProduccion_real);

	}
}
void mostrar(Empresa *empresa[2], float promedio){

	cout << endl;
	cout << "Mostrando empresas" << endl;
	for (int i = 0; i < 2; i++){
		cout << "Nombre: " << empresa[i]->getNombre() << endl;
		cout << "Direccion: " << empresa[i]->getDireccion() << endl;
		cout << "Telefono: " << empresa[i]->getTelefono() << endl;
		cout << "Plan de produccion: " << empresa[i]->getPlan_produccion() << endl;
		cout << "Produccion real: " << empresa[i]->getProduccion_real() << endl;
		cout << endl;

		cout << endl;
		
	}
}
void mostrar_ordenado(Empresa *empresa[2]){
		cout << "Listado de nombres de las empresas ordenado" << endl;
		for (int i = 0; i < 2; i++){
			empresa[i]->ordenamiento(empresa);
			cout << "Nombre: " << empresa[i]->getNombre() << endl;
		}
	}
