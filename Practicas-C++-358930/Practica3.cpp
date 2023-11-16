//Programa para utilizar un while en c++
//imprimir los pares entre 0 y 100
#include<iostream>
int main()
{
	int i=0;
	while(i<=100)
	{
		if(i % 2 ==0)
		{
			std::cout <<i<<" Es un numero par"<<std::endl;
		}
		i++;
	}
}