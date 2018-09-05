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
else
{
cout<<"the character is not an alphabet"<<endl;
}
return 0;
}
