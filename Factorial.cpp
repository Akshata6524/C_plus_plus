#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,fact;
    cout<<"Enter the value of n:";
    cin>>n;
    fact=factorial(n);
    cout<<"Factorial of "<<n<<" is "<<fact;
}
