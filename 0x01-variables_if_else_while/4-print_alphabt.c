#include <stdio.h>

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
