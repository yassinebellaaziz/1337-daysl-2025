#include <unistd.h>

int main(int argc, char **argv)
{
  int l = 0;
  int i = 0;
  if (argc == 2)
  {
    while (argv[1][l])
      l++;
    while (i < l )
    {
      char swap = argv[1][i];
      argv[1][i] = argv[1][l - 1];
      argv[1][l - 1] = swap;
      i++;
      l--;
    }
    i = 0;
    while (argv[1][i])
    {
      write(1,&argv[1][i],1);
      i++;
    }
  }
  write(1,"\n",1);
  return 0;
}
