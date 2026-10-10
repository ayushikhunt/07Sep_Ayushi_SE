
#include<stdio.h>

main()
{
    int a[10], i, j, temp;
    int max, min, sum = 0;
    float mean;

    printf("Enter 10 integers:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for(i = 0; i < 10; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }

        sum = sum + a[i];
    }

    mean = sum / 10.0;

    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);
    printf("\nMean = %.2f", mean);

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\n\nSorted Array: ");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    if(mean - min < max - mean)
    {
        printf("\n\nMean is closer to Minimum");
    }
    else if(max - mean < mean - min)
    {
        printf("\n\nMean is closer to Maximum");
    }
    else
    {
        printf("\n\nMean is exactly midway");
    }
}

