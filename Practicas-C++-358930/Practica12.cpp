//Practica 12 for con goto
#include <iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=20;j+=2)
		{
			if((i==1) && (j<=7))
			goto exit;
			cout << "i tiene el valor de : " <<i << "y j de : " <<j<<endl; 	
		}
	}
	exit:
		cout << "Fin del programa por el goto" <<endl;
		return 0;
}