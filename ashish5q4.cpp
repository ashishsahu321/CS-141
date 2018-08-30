//define the library
#include<iostream>
using namespace std;
//strat
int main()
{
//define variable
int a;
//print on screen
cout<<"enter the value of a"<<endl;
//give a value to 'a'
cin>>a;
//condition
if(a%5==0){
//display a is divisible by 5
cout<<"number a is divisible by 5"<<endl;
}
//condition
if(a%11==0){
//display a is divisible by 11
cout<<"a is divisible by 11"<<endl;
}
//condition
else{
//display a is not divisible by 5 or 11
cout<<"a is not divisible by 5 or 11"<<endl;
}
//end
return 0;
}
