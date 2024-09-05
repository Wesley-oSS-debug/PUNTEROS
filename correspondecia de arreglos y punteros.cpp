/* correspondecia de arreglos  y punteros*/
#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	
	int numeros[]={1,2,3,4,7,3,2,5,2};
	int *p;
	p=numeros;
	for(int i=0;i<9;i++){
		cout<<"Elemento del vector ["<<i<<"]: "<<*p++<<endl;
		cout<<"Posicion de memoria ["<<i<<"]: "<<p++<<endl;
	}
	
	
	
	
	
	getch();
	return 0;
}