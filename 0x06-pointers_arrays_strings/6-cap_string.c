#include "main.h"

/**
 * cap_string - capitalisses all the words in a string
 * @str:cthe string to be capitalised
 * Return: a pointer to the changed string
 */

char *cap_string(char *str)
{
int index = 0;
while (str[index])
while (!(str[index] >= 'a' && str[index] <= 'z'))
index++;
if (str[index - 1] == ' ' ||
str[index - 1] == '\t' ||
str[index - 1] == '\n' ||
str[index - 1] == '*' ||
str[index - 1] == ';' ||
str[index - 1] == ',' ||
str[index - 1] == '!' ||
str[index - 1] == '?' ||
str[index - 1] == '"' ||
str[index - 1] == '(' ||
str[index - 1] == ')' ||
str[index - 1] == '{' ||
str[index - 1] == '}' ||
index == 0)
{
str[index] -= 32;
index++;
}
return (str);
}
