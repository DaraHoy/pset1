#include <stdio.h>
#include <cs50.h>
#include <math.h>

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
    //decrements cents until 0 and prints number of iterations to get cents to 0
    for (int coins = 0; cents >= 0; coins++)
    {
        // deduct 25 if change remaining is greater 25
        if (cents >= 25)
        {
            cents -= 25;
        }
        // deduct 10
        else if (cents >= 10)
        {
            cents -= 10;
        }
        //deduct 5
        else if (cents >= 5)
        {
            cents -= 5;
        }
        //deduct 1
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
