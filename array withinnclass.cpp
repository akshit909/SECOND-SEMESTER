#include<iostream>
using namespace std;
class marks
{
	int marks[5],i;
	public:
	void read()
	{
		for(i=0;i<4;i++)
		{
			cin>>marks[i];
		}
	}
	void display()
	{
		for(i=0;i<4;i++)
		{
			cout<<marks[i]<<"     "<<endl;
		}
	}
};
   int main()
   {
   	marks obj;
   	obj.read();
   	obj.display();
   }
