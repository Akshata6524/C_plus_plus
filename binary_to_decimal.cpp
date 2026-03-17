#include<iostream>
#include<math.h>
using namespace std;
 int ans=0,i=0;
 
 int  binarytodecimal(int bin_num){
     
     while(bin_num>0){
       int rem=bin_num%10;
        bin_num=bin_num/10;
        ans=ans+(rem*(pow(2,i)));
       i++;
     }
     return ans;
 }
 int main(){
    int bin_num;
    cout<<"Enter the binary number:";
    cin>>bin_num;
    cout<<binarytodecimal(bin_num);
     
 }
 
