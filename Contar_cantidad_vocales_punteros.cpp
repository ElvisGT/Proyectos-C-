// Contar_cantidad_vocales_punteros.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Contar_cantidad_vocales_punteros.h"
#include <string>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Único objeto de aplicación

CWinApp theApp;

using namespace std;

void pedir();
void contar(char *);

char nombre[30];
int a, e, i, o, u;

int main()
{
	pedir();
	contar(nombre);

	cout << "El nombre tiene: " << endl;
	cout << "a: " << a << endl;
	cout << "e: " << e << endl;
	cout << "i: " << i << endl;
	cout << "o: " << o << endl;
	cout << "u: " << u << endl;

	system("pause");
	return 0;
}
void pedir()
{
	cout << "Introduce tu nombre: ";
	cin.getline(nombre, 30, '\n');

	_strlwr_s(nombre);
}
void contar(char *nombre)
{
	while (*nombre != NULL)
	{
		switch (*nombre)
		{
		case 'a':a++; break;
		case 'e':e++; break;
		case 'i':i++; break;
		case 'o':o++; break;
		case 'u':u++; break;
		}
		nombre++;
	}
}