#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    cout << "Enter Marks of all subjects out of 100." << endl;
    cin>>a>>b>>c>>d>>e;
    float f= a+b+c+d+e;
    float g=(f/500)*100;
    if (g>=90)
    {
        cout<<"Percentage = "<<g<<endl<<"Grade A";
    }
    else if (g>=80 && g<=89)
        {
            cout<<"Percentage = "<<g<<endl<<"Grade B";
        }
    else if (g>=70 && g<=79)
        {
            cout<<"Percentage = "<<g<<endl<<"Grade C";
        }
    else if (g>=60 && g<=69)
        {
            cout<<"Percentage = "<<g<<endl<<"Grade D";
        }
    else if (g>=40 && g<=59)
        {
            cout<<"Percentage = "<<g<<endl<<"Grade E";
        }
    else
    {
        cout<<"Percentage = "<<g<<"Fail.";
    }
}
