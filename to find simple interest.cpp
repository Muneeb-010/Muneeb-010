#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
system("Color 2b");
Sleep(2000);
int p,r,t,s;
system("cls");
cout<<"Enter principal ammount : "<<endl;
cin>>p;
cout<<"Enter The rate of interest : "<<endl;
cin>>r;
cout<<"Enter The number of year : "<<endl;
cin>>t;
s=(p*r*t)/100;
cout<<"Simple intest is : "<<s<<endl;


}

