#include <stdio.h>
int main(int argc, char* argv[])
{
  if (argc != 4)
  {
    printf("%s : expected 2 args, please enter two integers\n", argv[0]);
    return 1;
  }

  // at this point we know we have two args, let's check that they are ints
  int time;
  // ssscanf scans a string for a format - in this case an integer (%d) and returns
  // the number of items found
  int found = sscanf(argv[1], "%d", &time);
  if (found != 1)
  {
    printf("first arg is not an integer, enter two ints\n");
    return 1;
  }

  int distance;
  found = sscanf(argv[2], "%d", &distance);
  if (found != 1)
  {
    printf("second arg is not an integer, enter two ints\n");
    return 1;
  }
 //char Routename[] = argv[3];
 //found = sscanf(argv[3], "%s", &Routename[]);
 //if (found != 1)
 //{
 //   printf("3rd arg is not a string/n";
 //   return 1;
 //}
FILE *fp;
fp = fopen ("/usr/lib/cgi-bin/sp1a/runinfo.txt", "ab");
if (fp)
{
fprintf(fp, "Time: %d\nDistance: %d\nRoute: %s\n\n", time, distance, argv[3]);
printf("Run successful\nTime: %d\nDistance: %d\n Route: %s\n", time, distance, argv[3]);
fclose (fp);
}
else
{
printf("File not found");
}
}
