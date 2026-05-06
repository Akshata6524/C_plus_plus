#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    bool flaga=0,flagd=0;
    int arr[20];
    cout<<"Enter the size of an array : ";
    cin>>n;
    cout<<"Enter the elements:";
    for(i=0;i<n;i++)
    cin>>arr[i];
    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flaga=1;
        }
        if(arr[i]<arr[i+1]){
            flagd=1;
        }
    }
    
    if(flaga==1||flagd==1){
        cout<<"Not Sorted";
    }
    else
        cout<<"Sorted";
        
}
    
