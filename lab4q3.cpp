#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
float celsiusT,fehrenheitT;
cout<<"enter the temperature in fehrenheit"<<endl;
cin >>fehrenheitT;
celsiusT=(0.5555)*(fehrenheitT-32);
cout<<"the value of temperature in celsius is"<<setprecision(5)<<celsiusT<<endl;
return 0;
}
