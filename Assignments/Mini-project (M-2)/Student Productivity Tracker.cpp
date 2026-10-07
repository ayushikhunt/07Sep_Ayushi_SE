#include<stdio.h>
main()
{
	int ch=0,min[7];
	int total=0,higest;
	float avg;
	FILE *fl;
	
	while(1)
	{
		printf("\n========= Music Listening Logger =========");
		
		printf("\n\n1.Log Listening Minutes");
		printf("\n2.Weekly Summary");
		printf("\n3.Reset Data");
		printf("\n4.Exit");
		printf("\n\nEnter Your Choice:");
		scanf("%d",&ch);
		
			switch(ch)
			{
				case 1:
					
					printf("\n");
					fl=fopen("music_log.txt","w");
					for(int i=0;i<7;i++)
					{
						printf("Enter Number of Minutes listened day of [%d] :",i+1);
						scanf("%d",&min[i]);
						fprintf(fl,"\nDay [%d] Minutes: %d",i+1,min[i]);
					}
					fclose(fl);
					printf("\nData Saved Successfully!\n");
					break;
					
				case 2:
					
					printf("\n");
					char str[100];
				    fl=fopen("music_log.txt","r");
				    while(fgets(str,100,fl)!=NULL)
				    {
				        printf(" %s",str);
				    }
				    fclose(fl);
								
					printf("\n");
					printf("\n-----Weekly Summary-----\n");
					higest=min[0];
					for(int i=0;i<7;i++)
					{
						total+=min[i];
						if(min[i]>higest)
				        {
				            higest=min[i];
				        }
					}
					avg=total/7;
					printf("\nTotal Minutes:%d",total);
					printf("\nAverage Minutes:%.2f",avg);
					printf("\nHighest Minutes:%d",higest);
					printf("\n");
					break;
					
				case 3:

				    char confirm;
				
				    printf("\nAre you sure you want to reset data? (y/n): ");
				    scanf(" %c",&confirm);
				
				    if(confirm=='y' || confirm=='Y')
				    {
				        // Clear array
				        for(int i=0;i<7;i++)
				        {
				            min[i]=0;
				        }
				
				        // Clear file
				        fl=fopen("music_log.txt","w");
				        fclose(fl);
				
				        printf("\nWeekly data reset successfully!\n");
				    }
				    else
				    {
				        printf("\nData not reset.\n");
				    }
				
				    break;
					
				case 4:
					return 0;
					break;
			}	
	}
}
