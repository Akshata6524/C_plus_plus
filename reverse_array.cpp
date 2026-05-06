#include<iostream>
using namespace std;
int main(){
    int arr[10],i,n,low,high;
    cout<<"Enter the array size:";
    cin>>n;
    low=0;
    high=n-1;
    cout<<"Enter the array elements:";
    for(i=0;i<n;i++)
    cin>>arr[i];
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    for(i=0;i<n;i++)
    cout<<arr[i];
    return 0;
}
