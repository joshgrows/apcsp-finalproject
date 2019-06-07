#include <stdio.h>
void main (void)
{
FILE *fp;
int value;
fp = fopen ("/home/sp1a/myproject/runinfo.txt", "rb");
if (fp)
{
while (1)
{
value = fgetc (fp);
if (value == EOF) break;
else printf ("%c", value);
}
fclose (fp);
}
}
