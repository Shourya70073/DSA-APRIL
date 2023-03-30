#include<iostream>
#include<vector>
using namespace std;
void allIndex(int a[],int n,int i,int target, vector<int>&ans){
    if(n==1){
        if(a[0]==target){
            ans.push_back(0);
            return;
        }
        return;
    }
    if(a[0]==target){
        ans.push_back(i);
    }
    allIndex(a+1,n-1,i+1,target,ans);
}
int main(){
    vector<int>ans;
    int a[]={11,11,12,11,26};
    allIndex(a,5,0,11,ans);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}