#include <unistd.h>
/**
 * main - Emtry point
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	char lin1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, lin1, 59);
	return (1);
}
