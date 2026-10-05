#include<stdio.h>

void flcapital(char pnm[20] ,char nm[20])
{
	pnm[0]=pnm[0]-32;
    nm[0]=nm[0]-32; // a(97)-32 = 65[A]

    printf("\nProduct Name: %s", pnm);
    printf("\nYour Name: %s", nm);	
}

//   A = 65 -------  Z = 90
//   a = 97 -------  z = 122

main()
{
	char pnm[20],nm[20];
	
	printf("Enter Name of product:");
	scanf("%s",&pnm);
	printf("Enter Your Name:");
	scanf("%s",&nm);

	flcapital(pnm,nm);
}
