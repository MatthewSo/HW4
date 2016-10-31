#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>


int main() {

  
  struct stat temp;
  stat("file2.txt", &temp);
  printf("Info for file.txt\n");
  printf("Size: %lu bytes\n", temp.st_size);
  printf("Permissions: %o\n", temp.st_mode);
  printf("Time of last accessed: %s", ctime(&temp.st_atim));
  long m = temp.st_size;
  if (m < 1000){
    printf( "Human Size: %f B\n", m);
  }
  else if (m < 1000000){
    printf( "Human Size: %f KB\n", m/1000.0);
  }
  else if (m < 1000000000){
    printf( "Human Size: %f MB\n", m/1000000.0);
  }
  else{
    printf( "Human Size: %f GB\n", m/1000000000.0);}
  
}
