#include <unistd.h>

int main(int argc,char **argv)
{
  int     i;
  int   count = 0;

  i = 0;
  if (argc == 2)
  {
    while (argv[1][i])
    {
      count = 0;
      count = argv[1][i] - 97;
      while (count >= 0)
      {
        write(1,&argv[1][i],1);
        count--;
      }
      i++;
    }
  }
}
