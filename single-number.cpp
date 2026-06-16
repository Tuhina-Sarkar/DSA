//among all the numbers with their duplicates only one unique number exists
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int s=0;
    vector <int> vec={2,1,2,3,1};
    for(int num:vec){
        s=s^num;
    }
    cout<<"The unique number is: "<<s;    //n^n=0 

}
