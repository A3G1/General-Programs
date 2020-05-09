#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int l,u,m,x,pos=-1;
	cout<<"Enter the array elements: \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter number to Search:\n";
	cin>>x;
	l=0;
	u=n-1;
	while(l<u)
	{
		m=(l+u)/2;
		if(a[m]==x)
		{
			pos=m;
			break;
		}
		if(x>a[m])
		{
			l=m+1;
		}
		if(x<a[m])
		{
			u=m-1;
		}
	}
	if(pos==-1)
	{
		cout<<"Element not found";
	}
	else{
		cout<<"Element found at position: \n"<<pos;
	}
	return 0;
}
