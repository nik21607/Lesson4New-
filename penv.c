#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv){
   int i;
   char str_a[100];
   char *str = &str_a[0];
   if(argv[1]==NULL){
     printf("You did not enter a variable name\n");
  }else if(argv[2]==NULL){
   printf("You did not enter a variable value\n");
  }else if(argv[1]!=NULL){
      strcpy(str, argv[1]); 
  }
  char *str_format = strcat(argv[1],argv[2]);
  int flag = putenv(str_format);
   if(flag==0){
    printf("The function returned 0, the function completed successfully.\n");
   }else{
     printf("An error has occurred\n");
   }
   for(i=0;i<100;i++){
    if(str_a[i] == '=') str_a[i]= NULL;
   }
   if(getenv(str_a)!=NULL){
   printf("%s = %s\n",str_a,getenv(str_a));
  }else{
   printf("There is no such variable, add such an environment variable.\n");
  }
return 0;
}
