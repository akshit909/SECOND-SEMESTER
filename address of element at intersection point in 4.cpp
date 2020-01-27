#include<iostream>
using namespace std;
int main()
{
     int i,arr[4][4],j,w,z,r,c;
	 cout<<"Enter the elements of array;";
	 for(i=0;i<4;i++)
	 {
	 	for (j=0;j<4;j++)
		 {
		 	cin>>arr[i][j];
			 }	
	    cout<<"\n";
}
     cout<<"Array is:\n";
     for(i=0;i<4;i++)
	 {
	 	for(j=0;j<4;j++)
	 	{
	 		cout<<arr[i][j]<<"\t";
		 }
		 cout<<"\n";
	}
	cout<<"Enter the row number of the element to be printed";
	cin>>r;
		cout<<"Enter the column number of the element to be printed";
	cin>>c;
	z=1000+4*(4*(r-1)+4*(c-1));
	cout<<z;	
}
