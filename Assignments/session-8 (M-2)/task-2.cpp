#include<stdio.h>
#include<string.h>

void addToCart(char cart[3][20])
{
	char nm[10];
	printf("\n\nEnter Product name:");
	scanf("%s",&nm);
	
	printf("Cart was Updated:");
	strcpy(cart[2], nm);
	
	for(int i=0;i<3;i++)
	{
		printf("\n%d. %s",i+1,cart[i]);
	}
	
	
}

main()
{
	char cart[3][20]={"Mobile","Leptop"};
	
	printf("\n1.%s",cart[0]);
	printf("\n2.%s",cart[1]);
	
	addToCart(cart);	
}
