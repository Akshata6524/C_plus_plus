#include<iostream>
using namespace std;
 int p=1,ans=0;
 
 int  decimaltobinary(int dec_num){
     
     while(dec_num>0){
       int rem=dec_num%2;
        dec_num=dec_num/2;
        ans=ans+(rem*p);
       p=p*10;
     }
     return ans;
 }
 int main(){
    int dec_num;
    cout<<"Enter the decimal number:";
    cin>>dec_num;
    cout<<decimaltobinary(dec_num);
     
 }
