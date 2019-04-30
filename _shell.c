#include <stdlib.h>
#include <stdio.h>
#include <string.h> 
#include <fcntl.h> 
#include <sys/stat.h> 
#include <sys/types.h> 
#include <unistd.h> 

int main(){
    int pid = fork();
    if (pid == 0) {
        char *bulbArgs = "./bu";
        char *args[3] = {"bu","ciao",NULL};
        execvp(bulbArgs, args);
    }
    if(pid >0){
        printf("da shell --> pid = %i ;\n", pid);
    }
    sleep(1);

}