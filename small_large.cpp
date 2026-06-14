//finding smallest element in array
//finding largest element in array
#include<climits>//to use INT_MAX and INT_MIN
#include<iostream>
using namespace std;
int main(){
    int a[10],pos_small,pos_large;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    cout<<"Enter elements one by one: ";
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    //finding smallest
    for(int i=0;i<10;i++){
        if(a[i]<smallest){            //instead of if block : smallest=min(a[i],smallest)
            smallest=a[i];
             pos_small=i;
        }
    }
    //finding largest
    for(int i=0;i<10;i++){
         if(a[i]>largest){
            largest=a[i];
            pos_large=i;
        }
    }
    cout<<"Smallest element is "<<smallest<<" at position "<<pos_small+1<<endl;
    cout<<"Largest element is "<<largest<<" at position "<<pos_large+1;
    return 0;

}