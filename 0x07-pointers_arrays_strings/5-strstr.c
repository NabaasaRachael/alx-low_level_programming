#include "main.h"
/**
 *_strstr - locates a substring
 *@haystack: main string to be scanned
 *@needle: the substring to be searched
 *Return: returns pointer if substring is found or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	int j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + 1] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return ('\0');
}
