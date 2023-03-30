#include<iostream>
using namespace std;

void printIncreasing(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    printIncreasing(n-1);
    cout<<n<<endl;
}
int main(){
   printIncreasing(10);
   return 0;
}