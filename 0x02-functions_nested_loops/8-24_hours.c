#include "main.h"


	/**
	 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
	 * followed by a new line
	 */

	void jack_bauer(void)
	{
			int i;
			int j;
			int m;
			int n;
			int max;
			max = 57;
			for (i = 48; i < 51; i++)
            {
                if (i == 50){
                    max = 52;
                }
                for (j = 48; j < max; j++)
                {
                    for (m = 48; m < 54; m++)
                    {
                        for (n = 48; n <= 57; n++)
                        {
                            _putchar(i);
                            _putchar(j);
                            _putchar(':');
                            _putchar(m);
                            _putchar(n);
                            _putchar('\n');
                        }
                    }
                }
            }
	}

