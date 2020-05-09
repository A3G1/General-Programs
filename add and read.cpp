#include<iostream>
using namespace std;
class sum
{
	public:
		int a,b,r;
		void read()
		{
			cout<<"ENTER THE VALUE OF :"<<endl;
			cin>>a>>b;
		
		}
		void result()
		{
			r=a+b;
			cout<<"r=a+b"<<endl;
			cout<<r;
		}
};
int main()
{
	sum add;
	add.read();
	add.result();
	return 0;
}
