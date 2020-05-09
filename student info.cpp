#include<iostream>
using namespace std;

class details
{
	private:
		int uid;
		char name[50];
		int age;
		public:
		void info()
		{
			cout<<"ENTER THE INFORMTAION"<<endl;
			cout<<"Enter the uid"<<endl;
			cin>>uid;
			cout<<"Enter the name"<<endl;
			cin>>name;
			cout<<"Enter the age"<<endl;
			cin>>age;
			
		}
		void display()
		{
			cout<<"info is"<<endl;
			cout<<uid<<endl<<name<<endl<<age;
		}
};
int main()
{
	details cc2;
	cc2.info();
	cc2.display();
	return 0;
}
