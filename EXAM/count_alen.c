#include <unistd.h>

int count (char *argv)
{
  int i = 0;
  while (argv[i])
  {
    if (argv[i] == 'a')
      return i;
    i++;
  }
  return i;
}
#include <stdio.h>

int main(int argc ,char **argv)
{
  int c ;
  c = count(argv[1]);
  printf("%d",c);
}
