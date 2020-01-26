#include<iostream>
using namespace std;
class ARRAY
{
	 int a[5],i;
	 public:
	 	ARRAY()
	 	{
	 		cout<<"Array elements are:\n";
	 		for(i=0;i<5;i++)
	 		{
	 			cin>>a[i];
			 }
		}
			 void display()
			 {
			 	cout<<"ARRAY ELEMENTS ARE:\n";
			 	for(i=0;i<5;i++)
			 	{
			 		cout<<a[i]<<"\n";
				 }
			 }	
		 };
	int main()
	{
		ARRAY obj;
		obj.display();
	}
	
	
	
	

