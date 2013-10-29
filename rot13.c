#include "rot13.h"
#include <stdio.h>

void rot13(char *s){
  if(s==NULL){
    printf("Not a valid string");
    return;
  }
  int i;
  for(i=0;s[i]!='\0';i++){
    if((s[i] >='a' && s[i] <'n')||(s[i]>='A' && s[i]<'N')){
      s[i]+=13;
    }else if((s[i]>='n' && s[i] <='z')||(s[i]>='N' && s[i] <='Z')){
      s[i]-=13;
    } 
  }  
}
