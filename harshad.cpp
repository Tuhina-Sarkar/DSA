//To check whether a number is harshad or not
#include<iostream>
using namespace std;
int main(){
    int n,temp,s=0;
    cout<<"Enter a number: ";
    cin>>n;
    temp=n;
    while(temp!=0){
        int d=temp%10;
        s+=d;
        temp/=10;
    }
    if(n%s==0){
        cout<<s;
    }
    else{
       cout<<"Not a harshad number.";
    }
}