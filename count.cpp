//counting the length of the last word from a string excluding the trailing spaces
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    int i=s.length()-1;
    int count=0;
    while(i>=0 && s[i]==' '){
        i--;
    }
    while(i>=0 && s[i]!=' '){
        count++;
        i--;
    }
    cout<<"Length of the last word: "<<count<<endl;
    return 0;

}