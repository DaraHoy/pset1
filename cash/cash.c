#include <stdio.h>
#include <cs50.h>
#include <math.h>
//Sean: this problem looks good.
int main(void)
{
    //declare float
    float f;
    //validates user inputs and allows only positive floats to run
    do
    {
        f = get_float("Change owed: ");
    }
    while (f < 0);
    //converts float to integer
    int cents = round(f * 100);
    //decrements cents until 0 and prints number of iterations to get cents to 0.00
    for (int coins = 0; cents >= 0; coins++)
    {
        if (cents >= 25)
        {
            cents -= 25;
        }
        else if (cents >= 10)
        {
            cents -= 10;
        }
        else if (cents >= 5)
        {
            cents -= 5;
        }
        else if (cents >= 1)
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
