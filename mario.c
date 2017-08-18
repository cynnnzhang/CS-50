#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        printf("How tall would you like your half pyramid to be?: ");
        height = get_int();
    }
    
    while (height < 0 || height > 23);
    
    for (int i = 0; i < height; i++)
    {
        for (int spaces = height - i; spaces > 1; spaces--)
        {
        printf(" ");
        }
        
        for (int hashes = 0; hashes < i + 2; hashes++)
        {
        printf("#");
        }
        printf("\n");
    }
}
