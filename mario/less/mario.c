#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h = get_int("Height: ");
    //prompt user for pyramid height
    //if h is less than 1 or greater than 23 prompt the user again
    while(h < 0 || h > 23)
    {
        h = get_int("Height: ");
    }
    //iterate through rows
    for(int row = 1; row <= h; row++)
    {
        //create an empty string
        char stair[25];
        stair[24] = '\0';
        //iterate through columns
        for(int column = 0; column <= h; column++)
        {
            if(column <= row)
            {
                stair[h - column] = '#';
            }
            else
            {
                stair[h - column] = ' ';
            }
        }
        //print stair
        printf("%s\n", stair);
    }
}