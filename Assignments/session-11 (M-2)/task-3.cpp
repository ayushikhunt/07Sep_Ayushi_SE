#include<stdio.h>

main()
{
    int orders[5] = {200, 350, 150, 500, 250};
    int *ptr;

    ptr = orders;

    for(int i=0; i<5; i++)
    {
        printf("Amount = %d", *ptr);
        printf("  Address = %d\n", ptr);

        ptr++;
    }
}

