#include <unistd.h>

int main(int argc , char **argv)
{
  int i = 1;
  int j = 1;
  int k = 0;

  while (j < argc - 1)
  {
    i = 1;
    while (i < argc - j)
    {
      k = 0;
      while (argv[i][k] && argv[i + 1][k] && argv[i][k] == argv[i + 1][k])
        k++;
      if(argv[i][k] > argv[i + 1][k])
        {
          char *swap = argv[i];
          argv[i] = argv[i + 1];
          argv[i + 1] = swap;
        }
        i++;    
    }
    j++;
  }
  i = 1;
  while (i < argc)
  {
    k = 0;
    while (argv[i][k])
    {
      write(1,&argv[i][k],1);
      k++;
    }
    write(1,"\n",1);
    i++;
  }
}
