#include<iostream>
using namespace std;
int power(int n, int x){
    if(x==0){
        return 1;
    }

    int smallans=power(n,x-1);
    return smallans *n;
}
int main(){
    cout<<power(2,3);
    return 0;
}