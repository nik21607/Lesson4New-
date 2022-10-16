#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv){
 if(argv[1]==NULL){
   printf("You have not entered\n");
 }
 printf("You entered -> %s\n",argv[1]);
 if(getenv(argv[1])!=NULL){
  printf("value of variable -> %s\n",getenv(argv[1]));
 }else{
  printf("no such variable, please re-enter\n");
  printf("value of variable -> %s\n",getenv(argv[1]));
  }
  return 0;
}
