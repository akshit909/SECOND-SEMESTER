#include<iostream>
using namespace std;
class add
{
	int a;
	int b;
	public:
		void read(int x,int y)
		{
			  a=x;
			  b=y;
		}
		friend void fun(add);
};
   void fun(add t)
   {
   	cout<<"SUM IS:\n"<<t.a+t.b;
   }
   int main()
   {
   	add t;
   	t.read(45,67);
   	fun(t);
   }
   
