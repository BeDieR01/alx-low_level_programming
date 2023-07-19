#include "main.h"


	/**
	 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
	 * followed by a new line
	 */

	int _islower(int c)
	{
	    if (c < 97)
            {
                return (0);
            }
            else if (c > 122)
            {
                return (0);
            }
            else
            {
                return (1);
            }
	}

