#include<iostream>
using namespace std ;
int main()
{

	int array[10],n,i;

	cout<<"Input the number = ";
	cin>>n;
	for(int i=0;i<n;i++)
	{

	cin>>array[i];
	}
	n--;
	cout<<"Arry after end =";
	for ( i=0;i<n;i++)
	{
		cout<<array[i]<<endl;

	}
	array[i]= 9;
	n++;
	for(int i=0;i=n;i++)
	{

		cout<<array[i]<<endl;
	}
return 0;
}
