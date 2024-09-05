/*comprobar si un numero es par o impar, y señalar  la posicion de memoria
donde se esta guardando el numero. Con punteros*/
#include <iostream>
#include <conio.h>
 using namespace std;
 int main(){
 	 int numero,*dir_numero;
 	 do{
 	 		
 	 cout<<"Igrese un numero: "; cin>>numero;
 	 
 	 
 	 dir_numero= &numero; //guardando la posicion de memoria
 	
 	if(*dir_numero%2==0){
 		cout<<"El numero "<<*dir_numero<<" ES PAR\n";
 		cout<<"POCISION: "<<dir_numero<<endl;
	 }else{
	 	cout<<"El numero "<<*dir_numero<<" ES IMPAR\n";
	 	cout<<"POCISION: "<<dir_numero<<endl;
	 }
 	 	
 	 	
 }while(numero>0);
 	 
 	
 	
 	
 	getch();
 	return 0;
 }