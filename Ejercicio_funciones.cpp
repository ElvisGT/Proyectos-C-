// Ejercicio_funciones.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Ejercicio_funciones.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Único objeto de aplicación

CWinApp theApp;

using namespace std;

void pedir();
void mostrar(int[]);
int escribeNumeros(int, int);

int ini, fin;
int arreglo[100];

int main(){

	pedir();
	escribeNumeros(ini, fin);
	mostrar(arreglo);
	cout << endl;

	system("pause");
	return 0;
}
void pedir(){
	cout << "Introduce el inicio: ";
	cin >> ini;

	cout << "Introduce el fin: ";
	cin >> fin;
}
int escribeNumeros(int ini, int fin){

	
	int n=0;
	
	for (int i = ini; i < fin-1; i++){
		arreglo[n] = i + 1;
		n++;
	}

	return arreglo[n];

}
void mostrar(int arreglo[]){
	
	int x = 0;

	for (int i = ini; i < fin-1; i++){
		cout << arreglo[x] << " ";
		x++;
	}


}