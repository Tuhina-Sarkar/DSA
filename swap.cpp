//swapping min and max element
#include<climits>
#include<iostream>
using namespace std;
void change(int arr[],int size){
    int min_index,max_index,min=INT_MAX,max=INT_MIN,temp;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
            min_index=i;
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            max_index=i;
        }
    }
    temp=arr[min_index];
    arr[min_index]=arr[max_index];
    arr[max_index]=temp;
}
int main(){
    int arr[]={98,43,54,-1,32};
    cout<<"Initial Array: "<<endl;
     for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr,5);
    cout<<"After swapping: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}