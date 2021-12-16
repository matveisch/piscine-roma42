#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char    *ft_strdup(char *src)
{
    int i;
    char *range;

    range = (char *)malloc(ft_strlen(src) + 1);
    if (range == ((void*)0))
        return (((void *)0));
    ft_strcpy(range, src);
    return (range);
}

#include <stdio.h>

int main()
{
    char string[] = "hello";
    printf("%s\n", ft_strdup(string));
}