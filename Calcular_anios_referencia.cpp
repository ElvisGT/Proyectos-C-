// Calcular_anios_referencia.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Calcular_anios_referencia.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Único objeto de aplicación

CWinApp theApp;

using namespace std;

void calcular_a(int, int &, int &, int &);

int anios,meses,dias;
int dia_usuario;

int main(){

	cout << "Introduce el total de dias transcurridos desde la fecha 1/1/2000 hasta la fecha para calcular el tiempo transcurrido" << endl;
	cin >> dia_usuario;

	calcular_a(dia_usuario, anios, meses, dias);
	cout << "Datos" << endl;
	cout << "Anios: " << anios << endl;
	cout << "Meses: " << meses << endl;
	cout << "Dias: " << dias << endl;

	system("pause");
	return 0;
}
void calcular_a(int dias_usuario, int &anios, int &meses, int &dias){

	anios = dias_usuario / 365;
	dias_usuario %= 365;
	meses = dias_usuario / 30;
	dias = dias_usuario % 30;

}