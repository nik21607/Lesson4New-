#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv){
 if(argv[1]==NULL){
   printf("You did not enter a variable name\n");
 }else if(argv[2]==NULL){
   printf("You did not enter a variable value\n");
 }
 if(getenv(argv[1])==NULL){
   int flag = setenv(argv[1], argv[2],0);
   if(flag==0){
    printf("The function returned 0, the function completed successfully.\n");
   }else{
     printf("An error has occurred\n");
   }
  }else{
   int flag = setenv(argv[1], argv[2],1);
   if(flag==0){
    printf("The function returned 0, the function completed successfully.\n");
   }else{
     printf("An error has occurred\n");
   }
 }
 if(getenv(argv[1])!=NULL){
   printf("%s = %s\n",argv[1],getenv(argv[1]));
 }else{
   printf("There is no such variable, add such an environment variable.\n");
 }
return 0;
}
