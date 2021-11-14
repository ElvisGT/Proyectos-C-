// Calcular_por_referencia_horas.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Calcular_por_referencia_horas.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Único objeto de aplicación

CWinApp theApp;

using namespace std;

void pedir();
void tiempo(int, int &, int & , int &);

int segundos_usuario;
int horas,minutos,segundos;

int main(){

	cout << "Introduce los segundos que desea convertir en horas" << endl;
	cin >> segundos_usuario;

	tiempo(segundos_usuario, horas, minutos, segundos);

	cout << "Tiempo equivalente a la cantidad de segundos digitados " << endl;
	cout << "Horas: " << horas << endl;
	cout << "Minutos: " << minutos << endl;
	cout << "Segundos: " << segundos << endl;


	system("pause");
	return 0;
}
void tiempo(int segundos_usuario, int& horas, int& minutos,int &segundos){

	horas = segundos_usuario / 3600;
	segundos_usuario %= 3600;
	minutos = segundos_usuario / 60;
	segundos = segundos_usuario % 60;

}