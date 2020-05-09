#include<iostream>
using namespace std;
int main()
{
	int n,temp,a;
	cout<<"Enter the number";
	cin>>n;
	for(a=2;a<n-1;a++)
	{
	if(n%a==0)
	{
	temp=1;
    }
    }
	if(temp==0)
	{
	cout<<"The number is prime";}
	else
	{
	cout<<"The number is not prime";
}


	return 0;
}

