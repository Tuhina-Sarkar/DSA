//from binary to decimal
#include<iostream>
using namespace std;
int binToDeci(int n){
     int d,num=0,p=1;
     while(n>0){
        d=n%10;
        num+=d*p;
        n=n/10;
        p*=2;
     }
    return num;
}
int main(){
    int n;
    cout<<"Enter number in binary: ";
    cin>>n;
    int temp=n;
    cout<<"The decimal equivalent of "<<temp<<" is "<<binToDeci(n);
    return 0;
}