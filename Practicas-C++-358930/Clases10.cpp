#include <iostream>
#include <cmath>
using namespace std;
//Clase base para todas las figuras
class Figura{
	public:
		double lado,radio,altura;
		//Metodo virtual para sacar el area de la figura
		virtual double area() =0;
		//Metodo para imprimir el area de una figura
		void imprimir()
		{
			cout<<"El area de esta figura es : " <<area()<<endl;
		}
};
class Circulo:public Figura{
	public:
		//Constructor que recibe el radio del circulo
		Circulo(double r){
		radio=r;
		}
		//Metodo para calcular el area de un circulo
	double area(){
		return 3.1416*pow(radio,2);
	}	
};
class Cuadrado:public Figura{
	public:
		//Lados del cuadrado
	Cuadrado(double r ){
		lado=r;
	}
	double area(){
		return pow(lado,2);
	}
};
class Rectangulo:public Figura{
	//Entrada para los lados del rectangulo
	public:
	 Rectangulo(double r,double h)
	{
		lado=r;
		altura=h;
	}
	//Area
	double area(){
		return lado*altura;
	}
};
class Triangulo:public Figura{
	//Entrada para los lados del rectangulo
	public:
	Triangulo(double r,double h)
	{
		lado=r;
		altura=h;
	}
	//Area
	double area(){
		return (lado*altura)/2;
	}
};
class Cilindro:public Figura{
	public:
	Cilindro(double r, double h){
		radio=r;
		altura=h;
	}
	double area(){
		return (2*(3.1416)*radio*altura)+(3.1416*pow(radio,2));
	}
};
int main(){
	//Imprimir areas
	double r=4,h=5;
	Figura* Figuras[4];
	Figuras[0]=new Circulo(r);
	Figuras[1]=new Cuadrado(r);
	Figuras[2]=new Rectangulo(r,h);
	Figuras[3]=new Triangulo(r,h);
	Figuras[4]=new Cilindro(r,h);
		for(int i=0;i<=4;i++)
	{
		Figuras[i]->imprimir();
	}
	return 0;
}