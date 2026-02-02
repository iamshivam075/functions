#include<iostream>
using namespace std;

int sum(int n){

    int digsum=0;

    while(n>0){

         int lastdig=n%10;

        n/=10;

         digsum+=lastdig;
    }

    return lastdig;


}

int main(){

    // int n;
    // cout<<"enter a number:";
    // cin>>n;

    cout<<"sum is:"<<sum(234)<<endl;

    return 0;
}