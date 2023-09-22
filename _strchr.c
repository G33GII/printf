#include "main.h"

/**
 * _strchr - Search for a character in an array.
 * @target: The character to search for.
 * This function searches for the character @target within
 * the array of characters "csdibuoxX".
 * Return: 1 if @target is found, 0 otherwise.
 */
int _strchr(char target)
{
    int x;
    char charArray[] = "csdibuoxX";  /* Initialize an array of characters */

    for (x = 0; charArray[x]; x++)
    {
        if (target == charArray[x])
            return 1;
    }

    return 0;  /* Return 0 if the character is not found in the array */
}
