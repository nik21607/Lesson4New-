#include <sys/utsname.h>
#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

int main(){
 struct utsname buffer;
 if(uname(&buffer)<0){
   printf("function execution error\n");
   exit(1);
 }
  printf("Operating system name: %s\n",buffer.sysname);
  printf("Computer name: %s\n",buffer.nodename);
  printf("System issue (release) number: %s\n",buffer.release);
  printf("System version number: %s\n",buffer.version);
  printf("Hardware type: %s\n",buffer.machine);
  printf("Unique identifier for the work computer: %ld\n",gethostid());
return 0;
}
