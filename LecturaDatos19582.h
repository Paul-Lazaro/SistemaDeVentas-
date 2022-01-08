#include<iostream>
#include<string>
using namespace std;

/*
 * Lee un dato de tipo int.
*/
int leeDatoEntero()
{
	int dato;
	cin>> dato;
	return dato;
}

/*
 * Lee un dato de tipo int.
 * Se le pasa como parámetro la etiqueta.
*/
int leeDatoEntero(string etiqueta)
{
	int dato;
	string cadIngreso;
	do{
		cout << etiqueta; cin >> cadIngreso;
		if (isalpha(cadIngreso[0])){
			cout << "Error, debe ingresar un número." << endl;
		}
	}while(isalpha(cadIngreso[0]));
	dato = atoi(cadIngreso.c_str());
	return dato;
}

/*
 * Lee un dato de tipo int positivo
*/
int leeDatoEnteroPositivo(string etiqueta)
{
	int dato = -1;
	string cadIngreso;
	do{
		cout << etiqueta; cin >> cadIngreso;
		if (isalpha(cadIngreso[0])){
			cout << "Error, debe ingresar un número." << endl;
			continue;
		}
		dato = atoi(cadIngreso.c_str());
		if( dato <= 0 ){
			cout << "ERROR, debe ser un numero mayor que cero." << endl;
		}
	} while( dato <= 0 );
	return dato;
}

/*
 * Lee un dato de tipo float.
*/
float leeDatoFloat()
{
	float dato;
	cin >> dato;
	return dato;
}

/*
 * Lee un dato de tipo float.
 * Tiene un parámetro para la etiqueta.
*/
float leeDatoFloat(string etiqueta)
{
	float dato;
	string cadIngreso;
	do{
		cout << etiqueta; cin >> cadIngreso;
		if(isalpha(cadIngreso[0])){
			cout << "Error, debe ingresar un número." << endl;
		}
	}while(isalpha(cadIngreso[0]));
	dato = atof(cadIngreso.c_str());	
	return dato;
}

/*
 * Lee un dato de tipo float positivo.
 * Tiene un parámetro para la etiqueta.
*/
float leeDatoFloatPositivo(string etiqueta)
{
	float dato;
	string cadIngreso;
	dato = -1;
	do{
		cout << etiqueta; cin >> cadIngreso;
		if(isalpha(cadIngreso[0])){
			cout << "Error, debe ingresar un número." << endl;
			continue;
		}
		dato = atof(cadIngreso.c_str());	
		if(dato<=0){
			cout << "Error, debe ingresar un número positivo." << endl;
		}
	}while(dato<=0);
	return dato;
}



/*
 * Lee un dato de tipo double
*/
double leeDatoDouble()
{
	double dato;
	cin>> dato;
	return dato;
}

/*
 * Lee un dato de tipo double positivo.
 * Mayor que cero.
*/
double leeDatoDoublePositivo(string etiqueta)
{
	double dato;
	do{
		cout << etiqueta; cin>> dato;
		if( dato <= 0 ){
			cout << "ERROR, valor incorrecto." << endl;
		}
	} while( dato <= 0 );
	return dato;
}


char leedatoc()
{
	char dato;
	cin>> dato;
	return dato;
}

/*
 * Lee una cadena
*/
string leeDatoString()
{
	string dato;
	cin>> dato;
	return dato;
}

/*
 * Lee una cadena
*/
string leeDatoString(string etiqueta)
{
	string dato;
	cout << etiqueta;
	cin  >> dato;
	return dato;
}

/*
Nuevas funciones con CORONEL.
*/


// Leer opción de rango de opciones
int leerOpcion(int opMin, int opMax){
	int opcion;
	do{
		opcion = leeDatoEntero("Opción: ");
		if(opcion < opMin || opcion > opMax){
			cout << "Opcion incorrecta." << endl;
		}
	} while(opcion < opMin || opcion > opMax);
	return opcion;
}



// Leer opción de rango de opciones
// Tiene un parametro para la etiqueta
int leerOpcion(string etiqueta, int opMin, int opMax){
	int opcion;
	do{
		opcion = leeDatoEntero(etiqueta);
		if(opcion < opMin || opcion > opMax){
			cout << "Opcion incorrecta." << endl;
		}
	} while(opcion < opMin || opcion > opMax);
	return opcion;
}


// Función para leer sexo
char leeSexoMF( string etiqueta ){
	char dato;
	do{
		cout << etiqueta; cin>> dato;
		dato = toupper(dato);
		if(dato!='M' && dato!='F'){
			cout << "Error, ingrese M o F." << endl;
		}
	}while(dato!='M' && dato!='F');
	return dato;
}
 // Tipo de cliente 
 int leeTipoCliente( string etiqueta ){
	int dato=-1;
	string cadIngreso;
	do{
		cout << etiqueta; cin>> cadIngreso;
		if (isalpha(cadIngreso[0])){
			cout << "Error, debe ingresar un número." << endl;
			continue;
		}
		dato = atoi(cadIngreso.c_str());
		if(dato!=1 && dato!=2){
			cout << "Error, ingrese 1 o 2." << endl;
		}
	}while(dato!=1 && dato!=2);
	return dato;
}



