#include <unistd.h>

int main(int argc ,char **argv)
{
  int i = 0;
   if (argc == 2)
  {
    while (argv[1][i])
    {
      if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
      {
        argv[1][i] = 122 + 97 - argv[1][i];
        write(1,&argv[1][i],1);
      }
      else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
      {
        argv[1][i] = 90 + 65 - argv[1][i];
        write(1,&argv[1][i],1);
      }
      else
       write(1,&argv[1][i],1);
      i++;
    }
  }
  return 0;
}
