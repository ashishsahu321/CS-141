#include<iostream>
#include<iomanip>
using namespace std;
int main(){
float celsiusT;
float fehrenheitT;
cout<<"enter the temperature in celsius"<<endl;
cin>>celsiusT;
fehrenheitT=((celsiusT*9)/5)+32;
cout<<"the value of temperature in fahrenheit is"<< setprecision(5) <<fehrenheitT<<endl;
return 0;
}
