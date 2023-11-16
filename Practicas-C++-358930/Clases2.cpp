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
		private :
			int x,y,z;
};
int main(void) {
	int i;
	TCoordenada p1;
	p1.setX(1);
	p1.setY(2);
	p1.setZ(3);
	cout <<"(" <<p1.getX();
	cout <<", " <<p1.getY();
	cout <<", " <<p1.getZ();
	cout <<")" <<endl;
	return 0;
}