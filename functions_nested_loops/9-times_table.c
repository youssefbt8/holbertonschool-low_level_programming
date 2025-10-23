#include <stdio.h>

/**
 * times_table - prints the 9 times table, formatted neatly
 * Description: prints numbers from 0 x 0 up to 9 x 9
 * each row ends with a '$' and numbers are aligned.
 */
void times_table(void)
{
    int i, j, product;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            product = i * j;

            if (j != 0)
            {
                putchar(',');
                putchar(' ');
                if (product < 10)
                    putchar(' ');
            }

            if (product >= 10)
            {
                putchar((product / 10) + '0');
                putchar((product % 10) + '0');
            }
            else
            {
                putchar(product + '0');
            }
        }
        putchar('$');
        putchar('\n');
    }
}
dd
