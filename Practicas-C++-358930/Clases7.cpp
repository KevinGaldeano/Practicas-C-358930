//Herencia
#include <iostream>
using namespace std;
class Operacion{
	protected: //Permite que una subclase pueda acceder a distintos atributos
		int valor1;
		int valor2;
		int resultado;
	public: //Generamos 3 metodos de la clase operación
		cargar1();
		cargar2();
		mostrarResultado();
};
//Una clase para heredar los atributos de otra clase "padre"
//convirtiendose en una subclase por lo que todos los metodos
//de la clase suma
class Suma:public Operacion{ //Los : indican que suma es hijo de operacion
	public:
		operar();
};
class Resta:public Operacion{
	public:
		operar();
};
Operacion::cargar1() //Metodo de la clase operacion
{
	cout <<"Ingrese el primer valor : ";
	cin >>valor1;
}	
Operacion::cargar2()//Metodo 2 de la clase operacion
{
	cout <<"Ingrese el segundo valor : ";
	cin >>valor2;
}
Operacion::mostrarResultado() //Definicion del 3 metodo de clase operacion
{
	cout <<resultado<<endl;
}
Suma::operar()
{
	resultado=valor1+valor2; //Caracteristica que agrega la clase suma junto
	//con lo que heredo de su padre
}
Resta::operar()
{
	resultado=valor1-valor2; 
}
int main()
{
	Suma suma1;
	suma1.cargar1();
	suma1.cargar2();
	suma1.operar();
	cout <<"La suma de los dos valores es : "; 
	suma1.mostrarResultado();
	Resta resta1;
	resta1.cargar1();
	resta1.cargar2();
	resta1.operar();
	cout <<"La resta de los dos valores es : "; 
	resta1.mostrarResultado();
}