//0 1 1 2 3 5 8 13 21
//Starting from 0th term
#include<iostream>
using namespace std;
int fibonacci(int n){
    int a=0,b=1,c;
    if (n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        for(int i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
}
int main(){
    int n;
    cout<<"Enter nth term";
    cin>>n;
    cout<<fibonacci(n);
}