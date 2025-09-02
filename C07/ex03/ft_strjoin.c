#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;
    while (dest[i])
        i++;
    while (src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int total_len;
    char *result;

    if (size == 0)
    {
        result = (char *)malloc(1);
        if (result)
            result[0] = '\0';
        return result;
    }
    total_len = 0;
    i = 0;
    while (i < size)
    {
        total_len += ft_strlen(strs[i]);
        if (i < size - 1)
            total_len += ft_strlen(sep);
        i++;
    }
    result = (char *)malloc(total_len + 1);
    if (!result)
        return NULL;
    result[0] = '\0';
    i = 0;
    while (i < size)
    {
        ft_strcat(result, strs[i]);
        if (i < size - 1)
            ft_strcat(result, sep);
        i++;
    }
    return result;
}
#include <stdio.h>

int main()
{
    char *strs[] = {"Hello", "world", "42"};
    char *sep = "-";
    char *res;

    res = ft_strjoin(3, strs, sep);
    printf("%s\n", res);  // يطبع: Hello-world-42
    free(res);
    return 0;
}
