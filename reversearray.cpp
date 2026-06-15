//reversing an array
//using 2 pointers
//Time Complexity: 0(n)
#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int c,start=0,last=size-1;
    cout<<"Reversed array: ";
    while (start<last){
        c=arr[start];
        arr[start]=arr[last];
        arr[last]=c;
        start++;
        last--;
    }
       
}
int main(){
    int arr[]={6,2,1,4,9};
    cout<<"Initial Array: "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}