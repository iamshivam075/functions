#include<iostream>
using namespace std;

int ap(int n){

    return (3*n)+7;
}
int main(){

    int n;
    cout<<"enter the number:";
    cin>>n;
    int ans=ap(n);

    cout<<"answer is:"<<ans<<endl;

    return 0;
}