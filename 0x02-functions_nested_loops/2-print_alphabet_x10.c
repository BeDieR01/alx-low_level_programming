#include "main.h"


	/**
	 * print_alphabet - print all alphabet in lowercase
	 */


	void print_alphabet(void)
	{
		char letter;

        for (int i = 0; i < 10; i++){
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
        }

		_putchar('\n');
	}

