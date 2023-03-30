#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> getStairspath(int n){
    if(n==0){
        vector<string>temp;
        temp.push_back("");
        return temp;
    }
    else if(n<0){
        vector<string>temp;
        return temp;
    }

    vector<string>a=getStairspath(n-1);
    vector<string>b=getStairspath(n-2);
    vector<string>c=getStairspath(n-3);
    vector<string>fans;
    for(auto i:a){
        fans.push_back("1"+i);
    }
    for(auto i:b){
        fans.push_back("2"+i);
    }
    for(auto i:c){
        fans.push_back("3"+i);
    }
    return fans;
}
int main(){
    vector<string>ans=getStairspath(4);
    for(auto i:ans){
        cout<<i<<endl;
    }
    return 0;
}
