// Ejercicio_dados.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Ejercicio_dados.h"
#include <conio.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Único objeto de aplicación

CWinApp theApp;

using namespace std;

 



int main(){

	int dado1, dado2;

	dado1 = rand();

	while (!(dado1<6) && (dado1>0)){
		dado1 = rand();
	}

	cout << dado1 << endl;

	dado2 = rand();
	while (!(dado2<6) && (dado2>0)){
		dado2 = rand();
	}

	cout << dado2 << endl;


	puts("Presione Enter para continuar");
	_getch();
	return 0;

}

	

