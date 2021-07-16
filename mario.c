#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int blockNumber;
    //prompt user for positive number
    do
    {
        blockNumber = get_int("Please enter a positive number between 1 and 8\n");
    } while ((blockNumber < 1) || (blockNumber > 8));

    //Print the pyramid left aligned - i = 1 because I want to use that value for the condition in the second inner loop to display the #
    for (int i = 1; i <= blockNumber; i++)
    {
        for (int a = 0; a < blockNumber - i; a++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}