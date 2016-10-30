#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>


int main() {

  
  struct stat temp;
  stat("file.txt", &temp);
  printf("Info for file.txt");
  printf("Size: %lu bytes\n", temp.st_size);
  printf("Permissions: %o\n", temp.st_mode);
  printf("Time of last accessed: %s", ctime(&temp.st_atim));

}
