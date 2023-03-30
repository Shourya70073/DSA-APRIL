#include<iostream>
using namespace std;
int maxi(int a[],int n){
    if(n==1){
        return a[0];
    }
    int smaxi=maxi(a+1,n-1);
    if(a[0]>=smaxi){
        return a[0];
    }
    else{
        return smaxi;
    }
    
}
int main(){
    int a[]={1,2,37,6,99};
    cout<<maxi(a,5);
    return 0;
}