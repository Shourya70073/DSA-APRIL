#include<iostream>
using namespace std;
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    int smallans=fact(n-1);
    return n*smallans;
}
int main(){
  cout<<fact(5);
  return 0;
}