#include <unistd.h>
#include "main.h"

/**
* _putchar -writes the character c to stdout
* @C - the character to be printed
* Return: on success 1 else -1
*/
int _putchar(char c)
{
        return (write(1, &c, 1));
}
