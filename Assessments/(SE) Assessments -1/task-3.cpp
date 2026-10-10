#include<stdio.h>
struct student
{
	char name[50];
	int rollno; 	
	float marks;
	char grade;	
}stud[3];

void assignGrade(struct student *s)
{
    if(s->marks>=90)
    {
        s->grade='A';
    }
    else if(s->marks>=75)
    {
        s->grade='B';
    }
    else if(s->marks>=60)
    {
        s->grade='C';
    }
    else if(s->marks>=45)
    {
        s->grade='D';
    }
    else
    {
        s->grade='F';
    }
}

void printTopper(struct student s[], int n) 
{
	int i,highest=0;
	for(i=1;i<n;i++)
	{
		if(s[i].marks>s[highest].marks)
		{
			highest=i;
		}
	}
	printf("\n\nTopper Name: %s",s[highest].name);
    printf("\nTopper Marks: %.2f",s[highest].marks);
}

main()
{
	for(int i=0;i<3;i++)
	{
		printf("\nEnter details of Student %d:",i+1);
		printf("\nName:");
		scanf("%s",&stud[i].name);
		printf("Roll No:");
		scanf("%d",&stud[i].rollno);
		printf("Marks:");
		scanf("%f",&stud[i].marks);
	
		assignGrade(&stud[i]);
	}
	printf("\n");
	printf("\n----------- Student Records -----------\n");
	printf("\nName\tRoll No\tMarks\tGrade");
	for(int i=0;i<3;i++)
	{
		printf("\n%s\t%d\t%.2f\t%c",stud[i].name,stud[i].rollno,stud[i].marks,stud[i].grade);
	}
	
	printf("\n");
	printf("\n----------Topper-----------\n");
	printTopper(stud,3);

	
}
