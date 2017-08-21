#include<constream.h>

	class Shape{
	 public:
	 virtual void draw(){
	  cout<<"dummy shape is drawn";
	 }
	};

	class Circle : public Shape{
	 void draw(){
	  cout<<"Circle drawn";
	  }
	 };

	 class Rectangle : public Shape{
	 void draw(){
	  cout<<"Rectangle drawn";
	  }
	 };


	class DrawShape{

	       public:
	       static void drawShape(Shape *s){
		       s->draw();
	       }
	};

	void main(){
	 clrscr();
	  Circle c;
	  Rectangle r;
	  DrawShape::drawShape(&r);
	  getch();
	}