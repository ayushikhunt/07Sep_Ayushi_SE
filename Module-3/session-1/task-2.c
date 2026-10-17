#include<stdio.h>
#include<string.h>

char task[5][50];

void markTaskDone(int index)
{
    strcat(task[index]," - DONE");
}

main()
{
    int i,n;

    for(i=0;i<5;i++)
    {
        printf("Enter task %d: ",i+1);
        scanf(" %[^\n]",task[i]);
    }

    printf("\nEnter task number to mark DONE (1-5): ");
    scanf("%d",&n);

    if(n>=1 && n<=5)
    {
        markTaskDone(n-1);
    }
    else
    {
        printf("Invalid task number\n");
    }

    printf("\nUpdated Task List:\n");

    for(i=0;i<5;i++)
    {
        printf("%d. %s\n",i+1,task[i]);
    }
}

