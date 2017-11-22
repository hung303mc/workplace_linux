#include<stdio.h>

int main(){
 
 int *p=(int)MyMalloc(100*sizeof(int));
 char *q=(char)MyMalloc(250*sizeof(char));
 int *r=(int)MyMalloc(1000*sizeof(int));
 printf("Allocation finish!\n");
 MyFree(p);
 printf("free space!");
 char *w=(char)MyMalloc(700);
 printf("Allocation 700 byte finish!\n");
 MyFree(r);
 printf("free space!\n");
 int *k=(int)MyMalloc(500*sizeof(int));
 printf("Allocation and deallocation is done successfully!");
 
}