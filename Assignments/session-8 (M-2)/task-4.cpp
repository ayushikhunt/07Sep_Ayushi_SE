#include<stdio.h>

char* formatPrice(int price)
{
    static char result[20];

    sprintf(result, "%d", price);

    if(price >= 1000)
    {
        sprintf(result, "%d,%03d", price/1000, price%1000);
    }

    return result;
}

main()
{
    printf("Product 1 Price: %s\n", formatPrice(1599));
    printf("Product 2 Price: %s\n", formatPrice(2499));
    printf("Product 3 Price: %s\n", formatPrice(999));
}
