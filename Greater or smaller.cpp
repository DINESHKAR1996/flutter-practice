#include <iostream>

using namespace std;

int main()
{
    cout<<"Provide two number to see the greater one.\n";
    cout<<"\n";
    float a;
    float b;
    cout<<"Enter First Number \n";
    cin>>a;
    cout<<"Enter Second Number\n";
    cin>>b;
    cout<<"\n";
    if (a>b)
    {
        cout<<a<<" is greater than "<<b<<"."<<endl;
    }
    else if (a==b)
    {
        cout<<"Both numbers are equal.\n";
    }
    else
    {
        cout<<b<<" is greater than "<<a<<"."<<endl;
    }
}
