#include<iostream>
using namespace std;
int main()
{
char opt;
int a,b,sum,multiply,division,subtraction;
cout<<"Choose the opt 1 or 2 or 3 or 4 :";
cin>>opt;
cout<<"Enter the numbers";
cin>>a>>b;
switch(opt)
{
	case '1':
	sum=a+b;
	cout<<"sum :";
	break;
	
	case '2':
	subtraction=a-b;
	cout<<"subtraction :"<<subtraction<<endl;
	break;
	
	case3:
	multiply=a*b;
	cout<<"multiply :";
	break;
	
	case4:
	division=a/b;
	cout<<"division :";
	break;
	
	default:
	cout<<"wrong input";
	break;
		
}
return 0;
}
