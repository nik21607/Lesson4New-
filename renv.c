#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;
int main(int argc, char ** argv){
   char **environ_ptr;
   if(argv[1]==NULL){
   printf("You did not enter a variable name\n");
  }
   if(getenv(argv[1])!=NULL){
    int flag = unsetenv(argv[1]);
    if(flag==0){
     printf("The function returned 0, the function completed successfully.\n");
    }else{
     printf("An error has occurred\n");
    }
     if(getenv(argv[1])!=NULL){
       printf("%s = %s\n",argv[1],getenv(argv[1]));
    }else{
      printf("There is no such variable.\n");
    }
   }else if(getenv(argv[1])==NULL || argv[1] == NULL){
    printf("deleting the entire environment\n");
    clearenv();
    printf("Output of the entire environment\n");
    environ_ptr = environ;
    while(*environ_ptr !=NULL){
     printf("%s\n",*environ_ptr);
       *environ_ptr++;
    }
    printf("\n");
   }
return 0;
}
