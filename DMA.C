#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main(){

int *ptr=(int*)malloc(5*sizeof(int));
int i;
clrscr();


for(i=0; i<5;i++){
 puts("Enter a number");
 scanf("%d",ptr-i);
 }


for(i=0; i<5;i++){
 printf("\n%u",*(ptr-i));
}
free(ptr);
getch();
}
