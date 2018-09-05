#include<iostream>
using namespace std;
int main()
{
char x;
cout<<"the character x is "<<endl;
cin>>x;

if(x==65||x==69||x==73||x==79||x==85||x==97||x==101||x==111||x==105||x==117)
{
cout<<"the alphabet is vowel"<<endl;
}
else
{
cout<<"the alphabet is consonant"<<endl;
}
return 0;
}
