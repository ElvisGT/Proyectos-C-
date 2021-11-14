// funciones_recursividad_hallar_factorial.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "funciones_recursividad_hallar_factorial.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Único objeto de aplicación

CWinApp theApp;

using namespace std;

void pedir();
int factorial(int);

int n;

int main(){

	pedir();
	cout<<"El factorial de "<<n<<" es: "<<factorial(n)<<endl;

	system("pause");
	return 0;
}
void pedir(){
	cout << "Introduce un numero entero para hallar el factorial: ";
	cin >> n;
}
int factorial(int n){
	if (n == 0){//caso base//
		n = 1;
	}
	else
		n = n*factorial(n - 1);//caso general//

	return n;
}