/*
 * LAZARO CARPIO WILFREDO PAUL
*/

#include <iostream>
#include "Util.h"
using namespace std;

// Variables globales
int contVentas,contVentas50,contClieMasculino,contClieFemenino,contClieTipo1 ;
float descClieTipo2,VentClieTipo1 , VentClieFem ,PromVentClieFem;
// Funciones y procedimientos
void inicializarVariablesGlobales();
void registrarVenta();
void reporteEstadistico();

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	// Inicializar variables globales
	inicializarVariablesGlobales();
	// Programa
	do{
		// Cabecera 
		mostrarCabecera();
		// El menú
		mostrarMenu();
		opMenu = leerOpcion("Opción? ",1,3);
		// Procesar opción
		system("cls");
		switch(opMenu){
			case 1:
				registrarVenta();
				break;
			case 2:
				reporteEstadistico();
				break;
			case 3:
				salir();
				break;	
		}
		// Fin de opción
		if(opMenu!=3){
			system("pause");
		}
	}while(opMenu!=3);
	// Fin
	return 0;
}

void inicializarVariablesGlobales(){
	contVentas = 0;
	contVentas50 =0;
	contClieMasculino = 0;
	contClieFemenino = 0;
	contClieTipo1 =0;
	descClieTipo2=0; 
	VentClieTipo1=0;
	VentClieFem =0;
	PromVentClieFem =0; 
}

void registrarVenta(){
	// Variables
	char sexo;
	int edad, tipoHelado, CantHelados , TipoCliente;
	float precioDeHelado, importeBruto, importeNeto;
	float porcDcto1, descuento1;
	// Cabecera
	contVentas++;
	cout << "===============================" << endl;
	cout << "SISTEMAS DE VENTAS" << endl;
	cout << "Opción: Procesar Venta" << endl;
	cout << "Nro. de venta: " << contVentas << endl;
	cout << "===============================" << endl;	
	// Lectura de datos	
	cout << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "===============================" << endl;
	tipoHelado = leeTipoHelado();
	TipoCliente=leeTipoCliente("Tipo de Cliente (1/2)? ");
	CantHelados = leeDatoEnteroPositivo("Cantidad de helados? ");
	sexo = leeSexoMF("Sexo del cliente (M/F))? ");
	
	// Proceso
	precioDeHelado = obtenerPrecioPorHelado(tipoHelado);
	porcDcto1 = obtenerPorcDcto1(CantHelados);
	importeBruto = precioDeHelado * CantHelados;
	descuento1 = importeBruto * porcDcto1;
	importeNeto = importeBruto - descuento1;
	// Indicadores

	contClieMasculino += (sexo=='M')?1:0;
	contClieFemenino += (sexo=='F')?1:0;
	contClieTipo1 += (TipoCliente == 1)?1:0;
	contVentas50 += (importeNeto >50)?1:0;
	//sumadores 
	descClieTipo2 += (TipoCliente == 2 )?descuento1:0;
	VentClieTipo1 += (TipoCliente == 1)?importeNeto:0;
	VentClieFem += (sexo=='F')?importeNeto:0;
	
	// El condicional es para evitar una division entre cero en caso no haya clientes femeninos
	PromVentClieFem =(contClieFemenino!=0)?VentClieFem/contClieFemenino:0; 
	
	// Reporte de la venta
	system("cls");
	cout << endl;
	cout << "RESULTADO DE LA VENTA" << endl;
	cout << "===============================" << endl;
	cout << "Importe bruto:          " <<"S/. "<< importeBruto << endl;
	cout<< "Porcentaje de Descuento:    "<< porcDcto1*100 <<" % "<<endl; 
	cout << "Monto del Descuento:    " <<"S/. "<< descuento1 << endl;
	cout << "Importe neto:           " <<"S/. "<< importeNeto << endl;
}

void reporteEstadistico(){
	cout << "===============================" << endl;
	cout << "SISTEMAS DE VENTAS" << endl;
	cout << "Opción: Reporte de Ventas" << endl;
	cout << "===============================" << endl;
	cout << "Cantidad de ventas a Clientes masculinos:             " << contClieMasculino << endl;
	cout << "Cantidad de ventas a Clientes Tipo 1:                 " << contClieTipo1 << endl;
	cout << "Cantidad de ventas que superan los 50 soles:          " << contVentas50 << endl;	
	cout << "La suma de todos los descuentos a clientes tipo 2: "<<"   S/. "<< descClieTipo2<< endl;
	cout << "La suma de todas las ventas a clientes tipo 1: "<<"       S/. "<<VentClieTipo1<<endl;
	cout << "Promedio de las ventas a clientes de sexo femenino: "<<"  S/. "<<PromVentClieFem<<endl;
	cout << endl;
}
