#include <iostream>
using namespace std;

class ClasePadre
{

	public:
		int n1, n2, n3;//atributos
		//métodos
		ClasePadre (int, int, int) ; //constructor
		void mostrarNumeros () ;
};
ClasePadre::ClasePadre (int _n1, int _n2, int _n3) //constructor
{
	n1= _n1;
	n2= _n2;
	n3= _n3;
}
void ClasePadre::mostrarNumeros ()
{
	cout << "los numeros son: " << n1 << " " << n2 << " " << n3 << endl;
};


class ClaseHija : public ClasePadre //la ClaseHija hereda de la ClasePadre
{
		public:
		//atributos
		int n4;
		//métodos
		ClaseHija (int, int, int, int) ;//constructor
		void mostrarNumeros () ;//sobreescritura del metodo
};
//nuevo constructor empleando al constructor de la ClasePadre

ClaseHija::ClaseHija (int _n1, int _n2, int _n3, int _n4) : ClasePadre (_n1,_n2,_n3)
{	
	n4= _n4;
}
//El polimorfismo es cuando una clase hija sobrescribe un método que le fue heredado. 
//Por lo que el polimorfismo permite redefinir el comportamiento de la clase.
void ClaseHija::mostrarNumeros () //sobrescritura del método
{
	cout << "los numeros son: " << n1 << " " << n2 << " " << n3 << " " << n4 << endl;
}
int main ()
{
	ClaseHija numeros=ClaseHija (3, 4, 5, 6);//crear objeto
	numeros.mostrarNumeros () ; //usar el metodo sobrescrito
}