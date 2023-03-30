#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> getMazePath(int n,int m,int i,int j){
    if(i<0 || j<0 || i>=n || j>=m){
        vector<string>temp;
        return temp;
    }
    else if(i==n-1 && j==m-1   ){
        vector<string>temp;
        temp.push_back("");
        return temp;
    }

    vector<string>a1=getMazePath(n,m,i+1,j);
    vector<string>a2=getMazePath(n,m,i,j+1);
    vector<string>a3=getMazePath(n,m,i+1,j+1);

    vector<string>fans;

    for(auto i:a1){
        fans.push_back("h"+i);
    }
    for(auto i:a2){
        fans.push_back("v"+i);
    }
    for(auto i:a3){
        fans.push_back("d"+i);
    }

    return fans;

}
int main(){

   for(auto j:getMazePath(3,3,0,0)){
    cout<<j<<endl;
   }
   return 0;
}
