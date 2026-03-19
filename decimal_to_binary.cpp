#include<iostream>
#include<math.h>
using namespace std;
 int i=0,ans=0;
 
 int  decimaltobinary(int dec_num){
     
     while(dec_num>0){
       int rem=dec_num%2;
        dec_num=dec_num/2;
        ans=ans+(rem*(pow(10,i)));
       i++;
     }
     return ans;
 }
 int main(){
    int dec_num;
    cout<<"Enter the decimal number:";
    cin>>dec_num;
    cout<<decimaltobinary(dec_num);
     
 }
