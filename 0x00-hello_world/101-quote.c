#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: 1 (Sucess)
 */
int main(void)
{
	const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const size_t len = sizeof(msg) - 1; /* Subtract 1 to exclude null terminator */
	ssize_t nwritten;

	nwritten = write(STDERR_FILENO, msg, len);
	if (nwritten != (ssize_t)len)
	{
		return (1);
	}

	return (0);
}
