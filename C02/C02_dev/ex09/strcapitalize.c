#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
    int i;

    i = 1;
    if (str[0] >= 97 && str[0] <= 122)
    {
        str[0] = str[0] - 32;
    }
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        if (((str[i - 1] < 65 || str[i - 1] > 90) &&
             (str[i - 1] < 97 || str[i - 1] > 122)) &&
            (str[i - 1] < 48 || str[i - 1] > 57))
        {
            if (str[i] >= 97 && str[i] <= 122)
            {
                str[i] = str[i] - 32;
            }
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char str[] = "hello%h%%hello";
    printf("%s\n", ft_strcapitalize(str));
    return (0);
}