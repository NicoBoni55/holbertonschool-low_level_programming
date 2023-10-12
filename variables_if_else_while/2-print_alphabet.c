#include <stdio.h>
/**
 *main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
char caracter = 'a';
while (caracter <= 'z')
{
printf("%c \n", caracter);
if (caracter == 'n')
{
printf("ñ \n");
caracter++;
}
}
