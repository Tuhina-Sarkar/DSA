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
    cout<<"Enter a number:";
    cin>>n;
    if (checkPrime(n)==1){
        cout<<n<<" is a prime number";
    }
    else{
        cout<<"not a prime number";
    }
    return 0;
}