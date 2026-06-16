#include<iostream>
using namespace std;
void changeArr(int arr[],int size){
    cout<<"Inside function\n";
    for(int i=0;i<size;i++){
        arr[i]=arr[i]*2;
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[]={6,3,2};
    changeArr(arr,3);
    cout<<"Inside main\n";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}