#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        int p=s.size();
        if(p>10){
            cout<<s[0]<<p-2<<s[p-1]<<"\n";
        }
        else{
            cout<<s<<"\n";
        }
    }
    return 0;
} 
