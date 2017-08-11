#include<stdio.h>
#include<conio.h>
void main(){
      /*	FILE *fp=fopen("hello.txt","w+");
	char *str;
	clrscr();
	fputs("Hello KK",fp);
	fseek(fp,5,0);
	fputs("Mr.",fp);

	fclose(fp);
	*/
	FILE *fp;
	char *str;
	clrscr();
	fp=fopen("hello.txt","r");
	while(fgets(str,100,fp)!=NULL)
	puts(str);
       printf("%d", ftell(fp));

//	fseek(fp,3,SEEK_SET);

	rewind(fp);
	printf("\n%d", ftell(fp));
	while(fgets(str,100,fp)!=NULL)
	puts(str);
	getch();



 }