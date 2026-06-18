//using optimised version
//using 2 pointer approach(sorted array)
//to find out the pair sum
#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int>vec,int target){
    int pairedsum=0;
    vector<int>a;
    int start=0,last=vec.size()-1;
    while (start<last){
        pairedsum=vec[start]+vec[last];
        if(pairedsum==target){
            a.push_back(start);
            a.push_back(last);
            return a;
        }
        else if(pairedsum>target){
            last--;
        }
        else{
            start++;
        }

    }
}
int main(){
    vector<int>vec={1,2,4,5,7,3};
    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    cout<<"The paired sum is: ";
    for(int val:pairsum(vec,target)){
        cout<<val<<" ";
    }
    return 0;
}