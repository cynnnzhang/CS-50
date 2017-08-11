#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int minutes = 0;

    do
    {
        printf("Type in the number of minutes your shower was: ");
        minutes = get_int();
    }
    while (minutes < 0);


    int bottles = minutes*12;
    printf("Minutes: %i\n", minutes);
    printf("Bottles: %i\n", bottles);
}
