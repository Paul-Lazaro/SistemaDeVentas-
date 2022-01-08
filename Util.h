#include <iostream>
#include "LecturaDatos19582.h"
using namespace std;
void mostrarCabecera(){
	system("cls");
	cout << endl;
	cout << "========================" << endl;
	cout << "  ANTOJITOS FRIOS" << endl;
	cout << "  Sistema de Ventas" << endl;
	cout << "========================" << endl;
	cout << endl;
}


void mostrarMenu(){
	//system("cls");
	//cout << "===============================" << endl;
	cout << "Menú de opciones" << endl;
	cout << "===============================" << endl;
	cout << "1.- Registrar venta" << endl;
	cout << "2.- Reportar Estadistico" << endl;
	cout << "3.- Salir" << endl;
	cout << "===============================" << endl;
}

void salir(){
	cout << "===============================" << endl;
	cout << "ANTOJITOS FRIOS" << endl;
	cout << "Sistema de Ventas" << endl;
	cout << "Opción: Salir" << endl;
	cout << "===============================" << endl;	
	cout << "Gracias por su visita." << endl;
	cout << "Que tenga una feliz navidad." << endl;
	cout << "Lo esperamos pronto." << endl;
}


int leeTipoHelado(){
	int op;
	cout << "Tipo de Helado" << endl;
	cout << "   1.- Sandwich" << endl;
	cout << "   2.- Frio Rico" << endl;
	cout << "   3.- Sublime" << endl;
	cout << "   4.- Copa" << endl;
	op = leerOpcion("Opción? ",1,4);
	return op;
}



float obtenerPrecioPorHelado(int tipoHelado){
	float precio = 0.0;
	precio = (tipoHelado==1)?3.50:precio;
	precio = (tipoHelado==2)?2.50:precio;
	precio = (tipoHelado==3)?4.00:precio;
	precio = (tipoHelado==4)?3.80:precio;
	return precio;	
}

float obtenerPorcDcto1( int CantHelados){
	float porcDcto = 0.0;
	porcDcto = (CantHelados>=1 && CantHelados<=3)?0.00:porcDcto; // Esta linea de codigo es opcional , ya que si no la ponemos igual nos dara cero de 1 a 3
	porcDcto = (CantHelados>=4 && CantHelados<=8)?0.04:porcDcto;
	porcDcto = (CantHelados>=9 && CantHelados<=15)?0.09:porcDcto;
	porcDcto = (CantHelados>=16)?0.12:porcDcto;
	return porcDcto;
}





