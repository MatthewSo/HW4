#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>


int main() {

  
  struct stat temp;
  stat("file.txt", &temp);
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

  printf("Human File Permissions: \t");
  if (temp.st_mode & S_IRUSR) {
    printf("r");}
  else{
    printf("-");}

  if (temp.st_mode & S_IWUSR) {
    printf("w");}
  else{
    printf("-");}

  if (temp.st_mode & S_IXUSR) {
    printf("x");}
  else{
    printf("-");}

      if (temp.st_mode & S_IRGRP) {
    printf("r");}
  else{
    printf("-");}

  if (temp.st_mode & S_IWGRP) {
    printf("w");}
  else{
    printf("-");}

  if (temp.st_mode & S_IXGRP){
    printf("x");}
  else{
    printf("-");}

      if (temp.st_mode & S_IROTH) {
    printf("r");}
  else{
    printf("-");}

      if  (temp.st_mode & S_IWOTH){
    printf("w");}
  else{
    printf("-");}

  if (temp.st_mode & S_IXOTH) {
    printf("x");}
  else{
    printf("-");}
  
}
