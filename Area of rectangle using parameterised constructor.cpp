#include<iostream>
using namespace std;
class rectangle
{
	int l;
	int b;
	public:
		rectangle(int x,int y)
		{
			l=x;
			b=y;
		}
		void display()
		{
			cout<<"AREA OF RECTANGLE IS:\n"<<l*b;
		}	
};
	int main()
    {
    	int p,q;
    	cout<<"ENTER THE PARAMETERS AS LENGTH AND BREADTH RESPECTIVELY:\n";
    	cin>>p>>q;
    	rectangle r(p,q);
    	r.display(); 		
	}
