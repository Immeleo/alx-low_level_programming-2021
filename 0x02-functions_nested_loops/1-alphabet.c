#include <stdio.h>
#include <string.h>
/*
*Main - prints all alphabets in lower case.
*Return : always zero
*/
int main(void)
{
char ch;
printf("Lowercase characters: \n");
for (ch = 'a'; ch <= 'z'; ch++)
{
printf("%c ", ch);
}
return (0);
}
