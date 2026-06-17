//reversing a vector
//using 2 pointer approach
#include<iostream>
#include<vector>
using namespace std;
void reverse(vector <int>& vec){
    int last=vec.size()-1;
    int start=0,c;
    while(start<last){
        c=vec[start];
        vec[start]=vec[last];
        vec[last]=c;
        start++;
        last--;
    }
    cout<<"Reversed vector is : ";
    for(int ch:vec){
        cout<<ch<<" ";
    }
}
int main(){
    vector <int> vec;
    int c,ch;
    cout<<"Enter the no. of elements you want to enter in a vector: ";
    cin>>c;
    cout<<"Enter elements one by one: ";
    for(int i=0;i<c;i++){
        cin>>ch;
        vec.push_back(ch);
    }
    cout<<"Inside main: "<<endl;
    for(int i:vec){
        cout<<i<<" ";
    }
    reverse(vec);

}