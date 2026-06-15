//sum and product of all elements
#include<iostream>
using namespace std;
void operation(int arr[],int size){
    int sum=0,prod=1;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        prod*=arr[i];
    }
    cout<<"Sum of elements: "<<sum<<endl;
    cout<<"Product of elements: "<<prod;
}
int main(){
    int arr[]={1,2,3,4,5};
    operation(arr,5);
}