// Arreglos_dinamicos.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Arreglos_dinamicos.h"
#include <iomanip>
#include <stdlib.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Único objeto de aplicación

CWinApp theApp;

using namespace std;

void pedir();
void mostrar(int *);

int n;
int *arreglo_dinamico;

int main()
{

	pedir();
	cout << setw(20) << "Es asi " << setw(20) << "como se " << setw(20) << "?HACE?" << endl;
	mostrar(arreglo_dinamico);


	system("pause");
	return 0;
}
void pedir()
{
	cout << "Introduce la cantidad de elementos a guardar: ";
	cin >> n;

	arreglo_dinamico = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Introduce un numero: ";
		cin >> *(arreglo_dinamico+i);
	}
}
void mostrar(int *_arreglo_d)
{
	for (int i = n-1; i >= 0; i--)
	{
		cout << *(_arreglo_d + i) << endl;
	}

	delete[]_arreglo_d;
}