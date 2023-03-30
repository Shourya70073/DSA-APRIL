#include<iostream>
using namespace std;
void display(int a[],int n){
    if(n==1){
        cout<<a[0]<<endl;
        return;
    }
    cout<<a[0]<<endl;
    display(a+1,n-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    display(arr,5);
    return 0;
}
