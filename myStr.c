#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(char *str){
  int i = 0;
  while (*str){
    i++;
    str++;
  }
  return i;
}

char * mystrcpy(char *dst, char *src){
  int i;
  for (i = 0; src[i] != '\0'; i++)
    dst[i] = src[i];
  dst[i] = '\0';
  return dst;
}

char *mystrncat(char *dst, char *src, int n){
  int i, len;
  len = mystrlen(dst);
  for (i = 0; i < n && src[i] != '\0'; i++)
    dst[len + i] = src[i];
  dst[len + i] = '\0';
  return dst;
}

int mystrcmp(char *str1, char *str2){
  while (*str1 && *str2){
    if (*str1 > *str2) return 1;
    else if (*str1 < *str2) return -1;
    str1++;
    str2++;
  }
  return 0;
}

char *mystrchr(char *str, char c){
  while (*str){
    if (*str == c) return str;
    str++;
  }
  return NULL;
}

void lenTest(char *str){
  printf("length of [%s]: %d\n", str, mystrlen(str));
}

void cpyTest(char *dst, char *src){
  printf("copy [%s] onto [%s]: ", src, dst);
  mystrcpy(dst, src);
  printf("%s\n", dst);
}

void ncatTest(char *dst, char *src, int n){
  printf("add %d char(s) from [%s] to [%s]: ", n, src, dst);
  mystrncat(dst, src, n);
  printf("%s\n", dst);
}

void cmpTest(char *str1, char *str2){
  int ans = strcmp(str1, str2);
  if (ans > 0) printf("[%s] is greater than [%s]\n", str1, str2);
  else if (ans < 0) printf("[%s] is less than [%s]\n", str1, str2);
  else printf("[%s] and [%s] are equal\n", str1, str2);
}

void chrTest(char *str, int c){
  printf("search for %c in [%s]: %s\n", c, str, mystrchr(str, c));
}

int main(){
  char str1[256] = "yellow";
  char str2[256] = "submarine";
  printf("str1 = %s, str2 = %s\n", str1, str2);

  printf("\nmystrlen test\n");
  lenTest(str1);
  lenTest(str2);

  printf("\nmystrcpy test\n");
  char str3[256] = "yellow";
  char str4[256] = "submarine";
  cpyTest(str3, str4);
  cpyTest(str4, str3);

  printf("\nmystrncat test\n");
  char str5[256] = "yellow";
  char str6[256] = "submarine";
  ncatTest(str5, str6, 3);
  ncatTest(str6, str5, 1);

  printf("\nmystrcmp test\n");
  char str7[256] = "yellow";
  char str8[256] = "submarine";
  char str11[256] = "yellow";
  cmpTest(str7, str8);
  cmpTest(str8, str7);
  cmpTest(str7, str11);

  printf("\nmystrchr test\n");
  char str9[256] = "yellow";
  char str10[256] = "submarine";
  chrTest(str9, 'l');
  chrTest(str10, 'l');
}
