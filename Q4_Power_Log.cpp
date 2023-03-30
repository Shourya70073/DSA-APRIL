// x^n= x^n/2 * x^ n/2;
#include<iostream>
using namespace std;
int powerlog(int n, int x){
    if(x==0)
    {
        return 1;
    }

    int ans=powerlog(n,x/2);
    if(x%2==0){
        return ans*ans;
    }
    else{
        return ans*ans*n;
    }
}
int main(){
    cout<<powerlog(2,3);
    return 0;
}