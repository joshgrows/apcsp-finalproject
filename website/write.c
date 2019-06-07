#include <stdio.h>

void main (void)
{
  FILE *fp;
  int value;

  fp = fopen ("/home/sp1a/data.txt","wb");

  if (fp)
  {
    fputc ("",);
  }
  fclose (fp);
}
