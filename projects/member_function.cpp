#include<bits/stdc++.h>
#include <conio.h> // Added for clrscr() and getch()
using namespace std;

class student 
{
    char name[20];
    int rn,s1,s2,s3,total;
    float prc;

    public:
          void getData()
          {
            cout<<"n/Enter Your name:";
            cin>>name;
            cout<<"Enter Your Roll No:";
            cin>>rn;
            cout<<"Enter Three Subject Marks";
            cin>>s1>>s2>>s3;
          }
          void calculate()
          {
            total = s1+s2+s3;
            prc = static_cast<float>(total) / 3; //Ensure proper division
          }
          void display()
          {
            cout<<"Name:"<<name<<endl;
            cout<<"Roll:"<<rn<<endl;
            cout<<"total:"<<total<<endl;;
            cout<<"Percentage:"<<prc<<"%"<<endl;
          }
};

int main(){

    student s;
    //clrscr();
    
    s.getData();
    s.calculate();
    s.display();
    getch();

    return 0;
}