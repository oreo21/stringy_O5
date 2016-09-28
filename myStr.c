#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(char *str){ //char str[] 
  int i = 0;
  //char *cp = str;
  while (*str){ //*cp != 0 or *cp
    i++;
    str++; //cp++
  }
  return i;
}

char mystrcpy(char *dst, char *src){
  
}

char mystrncat(char *dst, char *src, int n){
}

int mystrcmp(char *str1, char *str2){
  int i;
  while (*str1 && *str2){
    if (
    str1++;
    str2++;
}

int mystrchr(char *s, char c){
}  

void cmpTest(char *str1, char *str2){
  int ret = mystrcmp(str1, str2);
  if (ret < 0) printf("str1 is less than str2\n");
  else if (ret > 0) printf("str1 is greater than str2\n");
  else printf("str1 is equal to str2\n");
}

int main(){
  char tars[256] = "whatever";
  printf("length of [%s]: %d\n", tars, strLen(tars));
  char str1[256] = "apple";
  char str2[256] = "apple";
  printf("str1 = %s, str2 = %s\n", str1, str2);
  cmpTest(str1, str2);
}
  
  
