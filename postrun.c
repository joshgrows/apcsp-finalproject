#include <stdio.h>
void main (int time, int distance, char route)
{
FILE *fp;
fp = fopen ("/home/sp1a/myproject/runinfo.txt", "ab");
if (fp)
{
fprintf(fp, "Time: %d\nDistance: %d\nRoute: %d\n\n", time, distance, route);
printf("Run successful\nTime: %d\nDistance: %d\n Route: %d\n", time, distance, route);
fclose (fp);
}
}
