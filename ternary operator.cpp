#include<iostream>
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<fstream>
#include <iomanip>

using namespace std;
int main()
{
int time;
cout<<"Enter time"<<endl;
cin>>time;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;
}

