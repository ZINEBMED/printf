#include "main.h"
/**
 * _strlen - calcule la longueur d'une chaîne de caractères
 * @s: la chaîne de caractères
 *
 * Return: lenght
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	return (len);
}
