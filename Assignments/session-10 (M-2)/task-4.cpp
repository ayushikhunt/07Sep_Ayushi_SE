#include<stdio.h>
#include<string.h>
main()
{
	char fnm[20],unm[5],temp[20];
	int len;
	
	printf("Enter Your Full Name:");
	scanf("%s",&fnm);
	
	len=strlen(fnm);
	if(len>=5)
	{
		strncpy(temp,fnm,5);
		temp[5]='\0';
		strcpy(unm,temp);
	}
	else
	{
		strcpy(unm,fnm);
	}
	printf("\nUsername : %s",unm);
}
