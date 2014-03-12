#include <stdio.h>
#include "rot13.h"

char* input(char *s){
  s =  gets(s);
  return s;
}

int main(){
    char str[1000];
    printf("Please enter a command\n");
    printf("enter a string to encrypt\n");
    input(str);
    rot13(str);
    printf("What you entered rotated by 13: %s\n", str);
    return 0;
}
