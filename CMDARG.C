#include<stdio.h>
#include<conio.h>
void main(int argv, char *argc[]){
	int i;
	clrscr();
	printf("total argument passed %d",argv);
	printf("\nfirst argument is %s",argc[0]);
	printf("\nHello %s",argc[1]==NULL?"Guest":argc[1]);
	getch();
}

