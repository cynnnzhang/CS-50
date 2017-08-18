#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change_given;
    int cent_amount = 0;
    int coincount = 0;

    do
    {
        printf("Yoyo! How much change is owed?: \n");
        change_given = get_float();
    }
    while (change_given < 0);
    
    cent_amount = (int)round(change_given*100);
    
  
    while (cent_amount >= 25)
    {
        cent_amount -= 25;
        coincount++;
    }
    while (cent_amount >= 10)
    {
        cent_amount -= 10;
        coincount++;
    }
    while (cent_amount >= 5)
    {
        cent_amount -= 5;
        coincount++;
    }
    
    while (cent_amount >= 1)
    {
        cent_amount -= 1;
        coincount++;
    }
    
    printf("%i\n", coincount);
    
}