#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the number";
	cin>>a;
	
	
	int sum=1;
	for(int i=1; i<=a; i++)
	{
		sum=sum*i;
		
	}
	cout<<sum;
}