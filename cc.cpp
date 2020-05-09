#include<iostream>
using namespace std;
class program
{
public:
char n;
int i,j;
void classname()
{
	cout<<"Enter the number";
	cin>>j;
	
}
void series()
{
	n=65;
	for(i=0;i<=j;i++)
	{
		cout<<n<<"-cc"<<endl;
		n++;
	}
}

};
int main()
{
	program yo;
	yo.classname();
	yo.series();
	
	return 0;

}
