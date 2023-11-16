#include <iostream>
#include <cmath>
using namespace std;
float x,m,a,b,c;
float positiva(int y)
{
	m=pow(b,2)-(4*a*c);
	if(m>=0)
	{
		x=((b*-1)+sqrt(m))/(2*a);
		return x;
	}	
	else
	{
		m=m*-1;
		x=((b*-1))/(2*a);
		return x;
	}
}
float negativa(int y)
{
	m=pow(b,2)-4*a*c;
	if(m>=0)
	{
		x=((b*-1)-sqrt(m))/(2*a);
		return x;
	}	
	else
	{
		m=m*-1;
		x=((b*-1))/(2*a);
		return x;
	}
}