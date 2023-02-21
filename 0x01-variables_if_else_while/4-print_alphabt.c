#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet excluding 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* initial the variable */
    char letter = 'a';
    /* loop over the character */

    while (letter <= 'z')
    {
        if (letter != 'q' && letter != 'e')
        {
            putchar(letter);
        }

        letter++;
    }
	/* print the character */
    putchar('\n');

    return (0);
}
