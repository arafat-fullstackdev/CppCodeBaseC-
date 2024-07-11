#include<bits/stdc++.h>
using namespace std;
class student 
{
    char name[20];
    int rn,s1,s2,s3;
    float prc;

    public:
          void getData()
          {
            cout<<"Enter Your name:";
            cin>>name;
            cout<<"Enter Your Roll No:";
            cin>>rn;
            cout<<"Enter Three Subject Marks";
            cin>>s1>>s2>>s3;
          }
          void calculate()
          {
            total = s1+s2+s3;
            prc = total/3;
          }
          void display()
          {
            cout<<"Name"<<name;
            cout<<"Roll"<<rn;
            cout<<"total"<<total;
            cout<<"Perchantage"<<prc;
          }
};

void main(){
    student s;
    clrscr();
    s.getData();
    s.calculate();
    s.display();
    getch();

    return 0;
}