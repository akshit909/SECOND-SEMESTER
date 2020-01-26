#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	int id;
	string name;
	public:
		void read()
		{
			cin>>name;
			cin>>id;
		}
		void display()
		{
			cout<<name<<"\n";
			cout<<id<<"\n";
		}	
};
 int main()
 {
 	int i;
 	employee a[3];
 	cout<<"Employee details\n";
 	for(i=0;i<3;i++)
 	{
 		a[i].read();
	 }
	  	for(i=0;i<3;i++)
 	{
 		a[i].display();
	 }
	 
 }
