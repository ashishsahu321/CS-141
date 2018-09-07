#include<iostream>
using namespace std;
//declaring main function
int main(){
           //declaring variables
          int i,j;
          //for loop
          for(i=0;i<5;i++){
               
               //for loop within for loop 
               for(j=0;j<5;j++){
                       
                         //condition
                         if(j>=(5-i))
                           //print
                           cout<<" ";
                         //if first conditon is not true
                         else
                           //print
                           cout<<"*";
               }
               //move to other row
               cout<<endl;
          
           }
//end  
return 0;
}

