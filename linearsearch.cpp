//linear search
//Time Complexity: o(n)
#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={64,12,1,7,2},target;
    cout<<"Enter the element you want to search : ";
    cin>>target;
    if (linearSearch(arr,5,target)==-1){
           cout<<"Not found";
    }
    else{
        cout<<target<<" found at "<<linearSearch(arr,5,target);
    }
}