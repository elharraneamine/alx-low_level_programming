#include "main.h"

/**
 * print_alphabet - Print the alphabet followed by a new line
 */

void print_alphabet(void)
{
  int letter;

  for (letter = 'a'; letter <= 'z'; letter++)
    _putchar(letter);

  _putchar('\n');
}
