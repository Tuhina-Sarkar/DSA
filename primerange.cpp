#include<iostream>
using namespace std;
int checkPrime(int n){
    bool isPrime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
        }
    }
    return isPrime;
}
int main(){
    int n;
    cout<<"Enter range of numbers";
    cin>>n;
    cout<<"Prime numbers within the range are: "<<endl;
    for(int i=2;i<=n;i++){
        if (checkPrime(i)==1){
        cout<<i<<endl;
    }
    }
}