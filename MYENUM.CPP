#include<constream.h>

	enum Days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

 class Message{
  public:
  Days day;
  Message(Days day){
   this->day=day;
  }
  void printMessage(){
  switch(day){
    case MONDAY:cout<<"Mondays are bad";break;
    case FRIDAY:cout<<"Fridays are better";break;
    case SATURDAY:
    case SUNDAY: cout<<"Weekends are best";break;
    default:cout<<"mid days are so so boring";
   }
  }

 };
 void main(){
 clrscr();

 Message m(WEDNESDAY);
 m.printMessage();

  getch();
  }
