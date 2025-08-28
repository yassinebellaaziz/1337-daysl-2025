#include <unistd.h>

int main(int argc, char **argv)
{
  int i = 1;
  int j = 0;

  while (argv[i])
  {
    while (argv[i][j])
    {
      write(1,&argv[i][j],1);
      i++;
      j++;
    }
  }
}
