#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
  int size = max - min;
  int i = 0;
  if (min >= max)
  {
    *range = NULL;
    return 0;
  }

  *range = malloc (sizeof(int) * size);

  if (range == NULL)
    return (-1);

  while (min < max)
  {
    (*range)[i] = min;
    min++;
    i++;
  }
  return (size);
}
#include <stdio.h>
int main()
{
  int *range;
  printf("%d\n",ft_ultimate_range(&range,12,24));
  int size = ft_ultimate_range(&range,12,24);
  int i = 0;
  while (i < size)
  {
    printf("%d\n",range[i]);
    i++;
  }
}