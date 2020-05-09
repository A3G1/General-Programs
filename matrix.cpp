#include<iostream>
using namespace std;
int main()
{
	int first[10][10],second[10][10],multiply[10][10],m,n,p,q,i,j,k,sum=0;
	cout<<"Enter the number of rows and columns of first matrix";
	cin>>m>>n;
	cout<<"The elements of first matrix are :"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
	{
		cin>>first[i][j];
	}
	}

	cout<<"Enter the number of rows and column of second matrix";
	cin>>p>>q;
	
    if(n!=p)
    {
    	cout<<"The multiplication is not possible";
	}
	else
	{
		cout<<"The elemnts of second matric are:"<<endl;
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				cin>>second[i][j];
			}
		}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<p;k++)
			{
				sum=sum+first[i][k]*second[k][j];
			}
			multiply[i][j]=sum;
			sum=0;
		}
	}
	cout<<"The product of matrices is :"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			cout<<multiply[i][j]<<" ";
		    
		}
		cout<<endl;
	}

}}




