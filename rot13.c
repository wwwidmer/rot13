#include "rot13.h"
#include <stdio.h>

void rot13(char *s){
  if(s==NULL){
    printf("Not a valid string");
    return;
  }
  int i;
  for(i=0;s[i]&&s;i++){
    if((s[i] >='a' && s[i] <'n')||(s[i]>='A' && s[i]<'N')){
      s[i]+=13;
    }else if((s[i]>='n' && s[i] <='z')||(s[i]>='N' && s[i] <='Z')){
      s[i]-=13;
    } else if((s[i] >= 48 && s[i] <=52)){
      // rotate by number of digits / 2 so = 4
      s[i]+=4;
    } else if((s[i] >= 53 && s[i] <=57)){
      s[i]-=4;
    }
  }  
}
