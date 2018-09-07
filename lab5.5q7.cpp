#include<iostream>
using namespace std;
//declaring main function
int main(){
           //declaring variables
          int i,j;
          //for loop
          for(i=1;i<6;i++){
               
               //for loop within for loop 
               for(j=0;j<11;j++){
                       
                         //condition
                         if((i==5||i==1)&&(j>=i && j<=(4+i)))
                           //print star
                           cout<<"*";
                         //if first conditon is not true
                         else{
                             if(j==i||j==(4+i))
                              //print star
                              cout<<"*";
                             else
                              //print space
                              cout<<" ";
                         }
               }
               //move to other row
               cout<<endl;
          
           }
//end  
return 0;
}

