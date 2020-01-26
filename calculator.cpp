#include<iostream>
using namespace std;
class calculator
{
	int x,y;
	public:
	void read()
	{
		cout<<"Enter the numbers:\n";
		cin>>x>>y;
	}
	void add()
	{
		cout<<x<<"+"<<y<<"="<<x+y;
	}
	void minus()
	{
		cout<<x<<"-"<<y<<x-y;
	}
	void mul()
	{
		cout<<x<<"*"<<y<<x*y;
	}
	void div()
	{
		cout<<x<<"/"<<y<<x/y;
}	
};
   int main()
   { 
   calculator c;
   c.read();
     int ch;
    cout<<"Enter 1 for addition:\n";
    cout<<"Enter 2 for subtraction:\n";
    cout<<"Enter 3 for multiplication:\n";
    cout<<"Enter 4 for division:\n";
   	cin>>ch;
   	switch(ch)
   	    {
   	   	case 1: c.add();
   	   	     break;
   	   	     case 2: c.minus();
   	   	     break;
   	   	     case 3: c.mul();
   	   	     break;
   	   	     case 4: c.div();
   	   	     break;
   	   	     default:cout<<"Wrong choice!!"	;
	  }
   	
   }
