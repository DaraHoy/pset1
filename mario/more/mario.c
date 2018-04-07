#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //initialize height
    int height;
    //do while loop to validate only positive integers below 24
    do
    {
        height = get_int("Height: ");
    }
    while (height < 0 || height > 23);
    //iterate through rows
    for (int row = 0; row < height; row++)
    {
        //iterate through columns
        for (int column = 0; column < (height * 2) + 2; column++)
        {
            if (column < height && column >
            {

            }
        }
        printf("\n");
    }

}