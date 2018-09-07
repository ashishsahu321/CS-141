#include<iostream>
using namespace std;
//declaring main function
int main(){
           //declaring variables
          int i,j;
          //for loop
          for(i=1;i<6;i++){
               
               //for loop within for loop 
               for(j=1;j<6;j++){
                       
                         //condition
                         if(i==1||i==5||j==1||j==5||i==j||j==(6-i))
                           //print
                           cout<<"*";
                         //if first conditon is not true
                         else
                           //print
                           cout<<" ";
               }
               //move to other row
               cout<<endl;
          
           }
//end  
return 0;
}

