/*punteros y valot por referencia*/

#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int numero, *dir_numero;
	dir_numero=&numero;
	numero=23;
	
	cout<<"El numero es: "<<*dir_numero<<endl;
	cout<<" Direccion de memoria del numero: "<<dir_numero<<endl;
	getch();
	return 0;
}