//define the library
#include<iostream>
using namespace std;
int main(){
//read a,b,c;
int a,b,c;
//display three number
cout<<"enter the three number"<<endl;
//give value to the numbers
cin>>a>>b>>c;
//condition
if(a>=b && a>=c)
{
//display a is the greatest
cout<<"a is the greatest number"<<endl;
}
//condition
if(b>=a && b>=c)
{
//display b is the greatest number
cout<<"b is the the greatest number"<<endl;
}
//if above condition are wrong
else{
//display c is the greatest number
cout<<"c is the the greatest number";
}
//end
return 0;
}
