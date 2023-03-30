#include<iostream>
#include<string>
using namespace std;
void printMazePath(int i,int j,int n,int m, string ans){
    if(i<0 || j<0 || i>=m || j>=m){
        return;
    }
    else if(i==n-1 && j==m-1){
        cout<<ans<<endl;
        return;
    }

    printMazePath(i+1,j,n,m,"h"+ans);
    printMazePath(i,j+1,n,m,"v"+ans);
    printMazePath(i+1,j+1,n,m,"d"+ans);

}

int main(){
    printMazePath(0,0,3,3,"");
    return 0;
}