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
        //print spaces
        for (int column = 0; column < height - (row + 1); column++)
        {
            printf(" ");
        }
        //print hashes
        for (int column = height - (row + 1); column < height; column++)
        {
            printf("#");
        }
        //print gap
        printf("  ");
        //print hashes right
        for (int column = height - (row + 1); column < height; column++)
        {
            printf("#");
        }
        //next line
        printf("\n");
    }

}