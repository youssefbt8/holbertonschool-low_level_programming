int _putchar(char c);  

/**
 * main - prints "_putchar" followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	_putchar(str[i]);

	return (0);
}

