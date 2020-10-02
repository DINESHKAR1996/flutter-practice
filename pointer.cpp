#include <iostream>
using namespace std;

struct student
{
	int roll;
	char name[20];
	char sec;
	
		struct dob
	{
		int day;
		char month[10];
		int year;
	
	};

};

int main()
{
	student s1;
	cout<<"Enter your roll number\n";
	cin>>s1.roll;
   	cout<<"Enter your name\n";
	cin>>s1.name;
    cout<<"Enter your section\n";
	cin>>s1.sec;
    cout<<"Student details is "<<s1.roll<<" "<<s1.name<<" "<<s1.sec;
}
