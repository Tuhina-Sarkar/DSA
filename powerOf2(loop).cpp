//Program to check whether a number is a power of 2 or not 
//using loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    while(n%2==0){
       n/=2;
    }
    if(n==1){
        cout<<"Power of 2";
    }
    else{
        cout<<"Not a power of 2";
    }
    return 0;
}