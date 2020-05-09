#include<iostream>
#include<cstring>
using namespace std;
double division(int a,int b)
{
	if(b==0)
	{
		throw "error";
	}
	else
	{
		return a/b;
	}
}
int main()
{
	int x=50;
	int y=0;
	double z=0;
	try
	{
		z=division(x,y);
		cout<<z<<endl;
	}
	catch(string &msg) //we take pointer char to use string becuse the value of exception should be fix/constant so we use const char * here mutable can be changed  and immutable can not be chnaged
	//when we make pointer variable constant(const char *var) in that case pointer ill be mutable and contet will be immutable and if it is char *c const there the it will be vice versa.
	//concept is concatenation
	{
		cerr<<msg<<endl; //for red colour error
		return 0;
	}
}
