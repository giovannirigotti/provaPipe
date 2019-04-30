#include <stdlib.h>
#include <stdio.h>
#include <string.h> 
#include <fcntl.h> 
#include <sys/stat.h> 
#include <sys/types.h> 
#include <unistd.h> 

void init(char* _pid){
    printf("da bulb --> pid = %s ; \n", _pid);
    fflush(stdout);
}

int main(int argc,char *argv[]){
    printf("controllo = %s;\n",argv[1]);
    fflush(stdout);
    //init(argv[2]);
}