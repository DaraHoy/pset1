#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float f;
    do
    {
        f = get_float("Change owed: ");
    }
    while(f<0);

    int cents = round(f*100);

    for(int coins = 0; cents >= 0; coins++)
    {
        if(cents >= 25)
        {
            cents -= 25;
        }
        else if(cents >= 10)
        {
            cents -= 10;
        }
        else if(cents >= 5)
        {
            cents -= 5;
        }
        else if(cents >= 1)
        {
            cents -= 1;
        }
        else
        {
            printf("%i\n", coins);
            break;
        }
    }
}
