#include<stdio.h>
main()
{
	int cricketScores[3][2]={{140,135},{120,150},{95,100}};
	
	for(int i=0;i<3;i++)
	{
		int j=0;
		if(cricketScores[i][j]>cricketScores[i][1])
		{
			printf("\nMatch %d highest score:%d",i+1,cricketScores[i][j]);
		}
		else
		{
			
			printf("\nMatch %d highest score:%d",i+1, cricketScores[i][1]);
		}
		
	}
}
