#include<iostream>
using namespace std;
int firstindex(int a[],int n,int target){
    if(n==1){
        if(a[0]==target){
            return 0;
        }
        return -1;
    }
    if(a[0]==target){
        return 0;
    }
    else{
        int p=firstindex(a+1,n-1,target);
        if(p==-1){
            return p;
        }
        else{
            return p+1;
        }
    }
   
}

int main(){
    int arr[]={3,2,7,7,5};
    cout<<firstindex(arr,5,11);
    return 0;


}