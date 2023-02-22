#include "main.h"
/**
 * _isalpha - checks for alphabetic letter
 *@c: the character argument to be checked
 * Return: 1 or 0 depending on condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
