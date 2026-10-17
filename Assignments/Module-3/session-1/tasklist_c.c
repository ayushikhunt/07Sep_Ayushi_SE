#include<stdio.h>
char task[5][50];

main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter task %d : ",i+1);
		scanf("%s",&task[i]);
	}
	printf("\n---------------------\n");
	for(i=0;i<5;i++)
	{
		printf("\nTask %d : %s",i+1,task[i]);
	}
}
