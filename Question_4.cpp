#include<iostream>
using namespace std;
int main()
{
	int eng,math,bio,chem,phy;
	
	cout<<"Enter the marks obtaind in English = ";
	cin>>eng;
	
	cout<<"Enter the marks obtaind in Mathamatics = ";
	cin>>math;
	
	cout<<"Enter the marks obtaind in Biology = ";
	cin>>bio;
	
	cout<<"Enter the marks obtaind in Chemistry = ";
	cin>>chem;
	
	cout<<"Enter the marks obtaind in Physics = ";
	cin>>phy;
	
	int total_marks = eng+math+bio+chem+phy;
	cout<<"Total marks are "<<total_marks;
	
	float Avg = ((float)total_marks / 500) * 100;
	cout<<" Average = "<<Avg;
	
	if(Avg >= 80 && Avg < 90 )
	{
		cout<<"Grade = A";
		
	}
	
	else if(Avg >= 70 && Avg < 80)
	{
		cout<<"Grade = B";
	}
	
	else if(Avg >= 60 && Avg < 70 )
	{
		cout<<"Grade = c";
	}
	
	else
	{
		cout<<"Grade = F";
	}
	
	return 0;
		
}