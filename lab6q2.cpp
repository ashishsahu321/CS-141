#include<iostream>
using namespace std;
//declaring main function
int main(){
           //declaring variables
           int i,j;
           //applying condition
           for(i=0;i<5;i++){
                            for(j=0;j<5;j++)
                            //condition
                            if(i==0||i==4||j==0||j==4)
                                                       cout<<"*";
                              else
                              cout<<" ";
                              cout<<endl;
                             }
return 0;
}
