#include <stdlib.h>
#include <stdio.h>

extern char **environ;

int main(){
 char **environ_ptr;
 environ_ptr = environ;
 while(*environ_ptr !=NULL){
  printf("%s\n",*environ_ptr);
  *environ_ptr++;
 }
 printf("\n");
return 0;
}
