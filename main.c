#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	float x1,x2,y1,y2,d,a,b,c;
	
	printf(" escribir la primera coordenada\n");
	printf(" X1: ");
	scanf("%f",&x1);
    printf(" Y1: ");
	scanf("%f",&y1);
	
	printf(" escribir la segunda coordenada\n");
	printf(" X2: ");
	scanf("%f",&x2);
    printf(" Y2: ");
	scanf("%f",&y2);
	
	a=x2-x1;
	b=y2-y1;
	a=a*a;
	b=b*b;
	c=a+b;
	/*para sacar las raices de una escuacion*/
	d=sqrt(c);
	
	printf(" el resultado es: %.2f", d);
	
	return 0;
}
