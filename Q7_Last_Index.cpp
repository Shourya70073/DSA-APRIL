#include<iostream>
using namespace std;
int lastindex(int a[],int n,int target){
    if(n==1){
        if(a[0]==target){
            return 0;
        }
        else{
            return -1;
        }
    }
    int p=lastindex(a+1,n-1,target);
    if(p==-1){
        if(a[0]==target){
            return 0;
        }
        else{
            return -1;
        }
    }
    else{
        return p+1;
    }
}
int main(){
    int arr[]={1,2,3,3,3};
    cout<<lastindex(arr,5,1);
    return 0;
}