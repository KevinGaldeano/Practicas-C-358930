//Programa para utilizar un for en c++
//imprimir los pares entre 0 y 100
#include<iostream>
int main()
{
	for(int i=0;i<=100;i++)
	{
		if(i % 2 ==0)
		{
		std::cout <<i<<" Es un numero par"<<std::endl;
		}
	}
}