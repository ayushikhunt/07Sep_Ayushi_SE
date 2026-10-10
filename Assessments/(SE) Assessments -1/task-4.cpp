#include<stdio.h>

struct Expense
{
	char cnm[10][30];
	float price[10];
}expense;

main()
{
	int ch,j=0;
	float total=0;
	while(1)
	{
		printf("\n===== Expense Manager =====\n");
		printf("\n1. Add Expense");
		printf("\n2. View All Expenses");
		printf("\n3. Save & Exit");
		printf("\n\nEnter Your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n");
				printf("Enter Category:");
				scanf("%s",&expense.cnm[j]);
				printf("Enter Amount:");
				scanf("%f",&expense.price[j]);
				j++;
				break;
				
			case 2:
				printf("\n--- All Expenses ---\n");
				printf("\nCategory\tAmount");
				for(int i=0;i<j;i++)
				{
					printf("\n%s\t\t%.2f",expense.cnm[i],expense.price[i]);
					total+=expense.price[i];
				}
				printf("\n----------------------------");
				printf("\nRunning Total\t%.2f",total);
				printf("\n");
				break;
				
			case 3:
				FILE *fl;
				fl=fopen("expenses.txt","w");
				for(int i=0;i<j;i++)
				{
					fprintf(fl,"\n%s,%.2f",expense.cnm[i],expense.price[i]);
				}
				fclose(fl);
				printf("\nData Saved Successfully!");
				return 0; 
				break;
		}
	}
}
