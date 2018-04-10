#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Set minutes
    int m = get_int("Minutes: ");

    //Set bottles
    int b = 12;

    printf("%i\n", m*b);
    //Sean: should put printf(bottles: %i\n) for a eaiser to read output
}