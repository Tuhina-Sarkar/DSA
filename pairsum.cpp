//Using brute force approach
//pair sum: [5,2,3,4,8] if the target element is 9
// it should return 0,3(indices of the numbers when added to get 9)
#include<iostream>
#include<vector>
using namespace std;
vector <int> pairsum(vector<int>vec,int target){
     int n=vec.size();
     vector<int>a;
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(vec[i]+vec[j]==target){
                 a.push_back(i);
                 a.push_back(j);
                 return a;
            }
        }
     }
}
int main(){
    vector<int>vec={5,2,3,4,8,7};
    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    cout<<"Pair sum: ";
    for(int ch:pairsum(vec,target)){
        cout<<ch<<" ";
    }
}