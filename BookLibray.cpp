#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
	string data;
	ofstream out("d:\\books.txt",ios_base::app);
	ifstream in("d:\\books.txt");
	int bookId;
	char bookName[50];
	int option,flag;
	do{
	
	cout<<"==========Book Store==========";
	cout<<endl<<"Choose 1 option";
	cout<<endl<<"1. Add a book";
	cout<<endl<<"2. Show books";
	cout<<endl<<"3. Exit\n";
	cin>>option;
	
	switch(option){
		case 1: 
		cout<<"Enter book id\t";
		cin>>bookId;
		cin.ignore();
		cout<<"Enter book Name\t";
		cin.getline(bookName,50);
		if(out.is_open()){
			out<<bookId<<"....."<<bookName<<"\n";
			cout<<"1 Book is added!";
		}else
		  cout<<"File not found!";
		
		break;
		case 2: 
		
		 if(in.is_open()){
		   
		   in.clear();
		   in.seekg(10);
		    	
		 	while(getline(in,data)){
		 		cout<<endl<<data;
			 }
		 }
		else
		 cout<<"File not found! please add one book first.";
		break;
		case 3: 
		cout<<"Thanks for visiting!";
		getch();
		exit(0);
		break;
		default: cout<<"Choose valid option!";
		break;
	}
	cout<<endl<<"Do you want more operations?(1/0)\t";
	cin>>flag;
	
}//do
while(flag);
	

	return 0;
}
