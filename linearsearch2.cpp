//linear search in vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int search;
    bool c=0;
    vector <int> vec={1,2,3,5,4,7};
    cout<<"Enter element you want to search: ";
    cin>>search;
    for(int num:vec){
        if (num==search){
            c=1;
            break;
        }
    }
    if(c==1){
        cout<<"Element found ";
    }
    else{
        cout<<"Not found";
    }
    return 0;
    
}