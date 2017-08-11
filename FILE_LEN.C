#include<stdio.h>
#include<conio.h>
int lengthOfFile(FILE *f){
	fseek(f,0,SEEK_END);
	return ftell(f);
}

void main(){
 FILE *fp=fopen("temp.txt","r");

 clrscr();
 printf("total %d characters found",lengthOfFile(fp));
 getch();
 }


