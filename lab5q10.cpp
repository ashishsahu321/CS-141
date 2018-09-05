#include<iostream>
using namespace std;
int main()
{
char x;
cout<<"the character x is "<<endl;
cin>>x;
if(x>='A' && x<='Z')
{
cout<<x"is an uppercase alphabet"<<endl;
}
if(x>='a'&&x<='z')
{
cout<<x"is a lower case alphabet"<<endl;
}
return 0;
}
