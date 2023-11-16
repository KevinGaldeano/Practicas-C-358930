#include <iostream>
using namespace std;

class TCoordenada {
	public : //Normalmente solo las funciones
		int x,y,z;
	protected :
		//Parte protegida,funciones y datos
	private :
		//Normalmente, datos y funciones auxiliares
};

int main(void){
	int i;
	TCoordenada p1;
	p1.x =1;
	p1.y =2;
	p1.z =3;
	cout <<"("<<p1.x <<", " <<p1.y <<", " <<p1.z <<")" <<endl;
	
	return 0;
}