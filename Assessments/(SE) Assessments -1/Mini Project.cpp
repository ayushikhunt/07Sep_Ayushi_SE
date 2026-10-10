#include<stdio.h>

struct StudyLog 
{ 
    char sub[3][40] = {"C", "Python", "C++"}; 
    float hours[3][7]; 
} stlog;

main()
{
    int ch, i = 0, j, k;
    float total = 0, avg;
    FILE *fp;

    while(1)
    {
        printf("\n===== Study Hours Tracker =====\n");
        printf("\n1. Log Today's Study Hours");
        printf("\n2. View Weekly Report");
        printf("\n3. Save & Exit");
        printf("\n\nEnter Your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                if(i < 7)
                {
                    printf("\n===== Log Today's Study Hours =====\n");

                    printf("\nEnter hour for C: ");
                    scanf("%f", &stlog.hours[0][i]);

                    printf("Enter hour for Python: ");
                    scanf("%f", &stlog.hours[1][i]);

                    printf("Enter hour for C++: ");
                    scanf("%f", &stlog.hours[2][i]);

                    i++;

                    printf("\nToday's Study hours logged Successfully!\n");
                }
                else
                {
                    printf("\nAll 7 days completed!\n");
                }
                break;

            case 2:
                printf("\n===== Weekly Study Report =====\n");

                for(i = 0; i < 3; i++)
                {
                    total = 0;

                    printf("\nSubject: %s", stlog.sub[i]);

                    for(j = 0; j < 7; j++)
                    {
                        total = total + stlog.hours[i][j];
                    }

                    avg = total / 7;

                    printf("\nWeekly Total Hours: %.2f", total);
                    printf("\nDaily Average: %.2f\n", avg);

                    printf("Progress: ");

                    for(j = 0; j < 7; j++)
                    {
                        for(k = 0; k < stlog.hours[i][j]; k++)
                        {
                            printf("*");
                        }
                    }
                    printf("\n");
                }
                break;

            case 3:
                fp = fopen("productivity_log.txt", "w");

                if(fp == NULL)
                {
                    printf("\nFile could not be opened!");
                    break;
                }

                for(i = 0; i < 3; i++)
                {
                    fprintf(fp, "%s", stlog.sub[i]);

                    for(j = 0; j < 7; j++)
                    {
                        fprintf(fp, ",%.2f", stlog.hours[i][j]);
                    }

                    fprintf(fp, "\n");
                }

                fclose(fp);

                printf("\nRecords saved successfully!");
                return 0;

            default:
                printf("\nInvalid choice!");
        }
    }
}

