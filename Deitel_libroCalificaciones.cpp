// Deitel_libroCalificaciones.cpp: define el punto de entrada de la aplicaci�n de consola.
//

#include "stdafx.h"
#include "Deitel_libroCalificaciones.h"
#include "LibroCalificaciones.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// �nico objeto de aplicaci�n

CWinApp theApp;

using namespace std;

int main(){
	
	LibroCalificaciones milibro("Elvis y la programacion que desea aprender para ser un profesional el dia de maniana");

	milibro.MostrarLibroCalificaciones();
	milibro.HallarPromedio();


	system("pause");
	return 0;
}