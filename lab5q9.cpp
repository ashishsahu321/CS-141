#include<iostream>
using namespace std;
int main()
{
char x;
cout<<"the character x is "<<endl;
cin>>x;
if((x>='a' && x<='z')||(x>='A' && x<='Z'))
{
cout<<"the character is an alphabet year"<<endl;
}
else if(x>=0 || x<=9)
{
cout<<"the character is a digit"<<endl;
}
else
{
cout<<"it is a special character"<<endl;
}
return 0;
}
