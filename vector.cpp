#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(43);
    vec.push_back(39);
    vec.push_back(32);
    cout<<"Initially: ";
    for (int num:vec){
        cout<<num<<" ";
    }
    vec.pop_back();
    cout<<"After popping: ";
     for (int num:vec){
        cout<<num<<" ";
    }
}