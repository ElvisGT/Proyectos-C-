// Arrays_punteros.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Arrays_punteros.h"
#include <conio.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Único objeto de aplicación

CWinApp theApp;

using namespace std;

void pedir();
void determinarPares(int *);

int numero[10];


int main()
{
	pedir();
	cout << endl;
	determinarPares(numero);

	puts("Presione enter para continuar");
	_getch();
	return 0;
}
void pedir()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Introduce un numero: ";
		cin >> numero[i];
	}

	int *p;

	p = numero;
	
}

void determinarPares(int *_p)
{
	for (int i = 0; i < 10; i++)
	{
		if (*_p % 2 == 0)
		{
			cout << "El numero es par, y se encuentra en la posicion de memoria: " << _p << endl;
		}
		else
		{
			cout << "El numero es impar, y se encuentra en la posicion de memoria: " << _p << endl;
		}
		_p++;
	}
}