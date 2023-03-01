#include "main.h"
/**
* rot13 - applies the ROT13 encoding to the characters in a string
* @s: pointer to string to be encoded
*
* Return: pointer to  encoded string, the same as the input string `s`.
*/
char *rot13(char *s)
{
int i;
int j;
char data1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == data1[j])
{
s[i] = datarot[j];
break;
}
}
} return (
s);
}
