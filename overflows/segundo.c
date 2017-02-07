#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int auth(char* pass){
    int au = 0;
    char password[16];
    strcpy(password, pass);
    if(strcmp(password, "1234567890") == 0){
        au = 1;
    }
    return au;
}

int main(int argc, char* argv[]){
    auth(argv[1])?printf("access granted\n"):printf("access denied\n");
    return 0;
}
