//Clases 3
//Acceder a miembros privados de una clase
#include <iostream>
using namespace std;
class TCoordenada {
	public :
		//Funciones miembro
		setX(int xx) {x=xx;}
		setY(int yy) {y=yy;}
		setZ(int zz) {z=zz;}
		
		int getX() {return x;}
		int getY() {return y;}
		int getZ() {return z;}
		imprimir(){
		cout <<"(" <<x;
		cout <<", " <<y;
		cout <<", " <<z;
		cout <<")" <<endl;
		}
		private :
			int x,y,z;
};
int main(void) {
	int i;
	TCoordenada p1,p2;
	p1.setX(1);
	p1.setY(2);
	p1.setZ(3);
	p2.setX(4);
	p2.setY(5);
	p2.setZ(6);
	p1.imprimir();
	p2.imprimir();
	return 0;
}