#include<stdio.h>

int main() 
{	
	double valor;
	printf("digite: ");
	scanf("%lf", &valor);
	
	double valordeci = valor * 10;
	double valorcenti = valor * 100;
	double valormili = valor * 1000;
	
	printf("Valor em decímetros: %.2lf\n", valordeci);
	printf("Valor em decímetros: %.2lf\n", valorcenti);
	printf("Valor em decímetros: %.2lf\n", valormili);
    return 0;
}
