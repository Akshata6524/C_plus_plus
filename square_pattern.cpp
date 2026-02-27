/* ***
   ***
   *** */
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
}
/*1 2 3 4
  1 2 3 4
  1 2 3 4
  1 2 3 4*/
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<"\n";       
    }   
}
/* A B C D
   A B C D
   A B C D
   A B C D*/
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        char ch='A';  //reset
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
                 ch++;      /*ch=ch+1; =>ch=A+1;
                                          ch=65+1;
                                          ch=66;(B);*/
        }
        cout<<"\n";
        
    }
    
}
/*123
  456
  789*/
#include<iostream>
using namespace std;
int main(){
    int n=3;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<num;
            num++;           
        }
        cout<<"\n";
    }
}
/*A B C D
  E F G H
  I J K L
  M N O P*/

#include<iostream>
using namespace std;
int main(){
    int n=4;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch++;            /*ch=ch+1; =>ch=A+1;
                                          ch=65+1;
                                          ch=66;(B);*/
        }
        cout<<"\n";
        
    }
    
}
