#include "main.h"
/**
 * _strlen - calcule la longueur d'une chaîne de caractères
 * @s: la chaîne de caractères
 *
 * Return: le nombre de caractères dans la chaîne (sans compter le caractère nul)
 */
int _strlen(char *s)
{
    int len = 0;

    while (*s != '\0')
    {
        len++;
        s++;
    }

    return len;
}
