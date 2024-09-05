/*ejercicios de funciones y haciendo uso de punteros

indicar en que posicion de memoria se guardó el numero

1.- hallar si un numero es primo o no*/
#include<iostream>
#include <conio.h>
using namespace std; 

bool hallar(int);

int main (){
	
	int numero, *dir_numero;
do{
 
 cout<<"Ingrese el numero: "; cin>>numero;
	dir_numero=&numero;
 hallar(*dir_numero);
 if(hallar(*dir_numero)==true){
 	cout<<"En numero es primo\n";
 	cout<<"LA POSICION ES: "<<dir_numero<<endl;
 }else{
 	cout<<"El numero NO ES PRIMO\n";
 	
	cout<<"LA POSICION ES: "<<dir_numero<<endl;
 }
		
}while(dir_numero>0);


 getch();
 
return 0;
}


bool hallar(int a){
	int i,contador=0;
	for(i=1;i<=a;i++){
		if(a%i==0){
		contador++;		
	}
		}if(contador==2){
			return  true;
			}else{
			return false;
			}
	
}