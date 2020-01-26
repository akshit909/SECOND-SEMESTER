#include<iostream>
using namespace std;
class student
{
	int marks;
	int total marks;
	public:
	void read()
	{
		cout<<"ENETR THE MARKS:\n";
		cin>>marks;
	}
	void total(student m1,student m2)
	{
		total=m1.marks+m2.marks;
	}
	void display()
	{
		cout<<total marks;
	}
};
    int main()
    {
    	student s1,s2,s3;
    	s1.read();
    	s2.read();
    	s3.total(s1,s2);
    	s3.display();
	}
