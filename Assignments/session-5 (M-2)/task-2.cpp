 #include<stdio.h>
main()
{
	int ch;
	
	printf("\n1.Breakfast");
	printf("\n2.Lunch");
	printf("\n3.Dinner");
	printf("\n4.Snak");
	
	printf("\nEnter Your choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			
			printf("Poha");
			break;
			
		case 2:
			
			printf("Gujarati Thali");
			break;
			
		case 3:
			
			printf("Pizza");
			break;
			
		case 4:
			
			printf("Sandwich");
			break;
			
		default:
			
			printf("\nTry some fruits!");
			break;
	}
}
