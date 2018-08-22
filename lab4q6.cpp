#include<iostream>
using namespace std;
int main()
{
int year,week,day;
cout<<"enter no of days"<<endl;
cin>>day;
year=day/365;
week=(day%365)/7;
day=((day%365)%7);
cout<<"the year,weak and day in specific no of days is"<<year<<endl<<week<<endl<<day<<endl;
return 0;
}
