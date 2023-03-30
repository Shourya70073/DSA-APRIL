#include<iostream>
#include<string>
using namespace std;
void printstairpath(int n,string ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    else if(n<0){
        return;
    }
    printstairpath(n-1,"1"+ans);
    printstairpath(n-2,"2"+ans);
    printstairpath(n-3,"3"+ans);

}
int main(){
    printstairpath(4,"");
    return 0;
}