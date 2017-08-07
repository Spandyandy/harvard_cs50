#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    
    do
    {
        printf("O hai! How much change is owed?\n");
        n = round(GetFloat()*100);
    }while(n < 0);
    
    int count = 0;
    while( n >= 25)
    {
        n -= 25;
        count ++;
    }
    while( n >= 10)
    {
        n -= 10;
        count ++;
    }
    while( n >= 5)
    {
        n -= 5;
        count ++;
    }
    while( n >= 1)
    {
        n -= 1;
        count ++;
    }
    
    printf("%d\n", count);
}
