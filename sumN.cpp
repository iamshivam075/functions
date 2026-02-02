#include<iostream>
using namespace std;
int sumn(){

    int a;
    cout<<"enter the number:";
    cin>>a;

   int sum=0;
    for(int i=0;i<=a;i++){
        sum+=i;
    }
    return sum;

}

int main(){

    // cout << sumn(5) << endl;
    // int n;
    // cout<<"enter the number:";
    // cin>>n;
    int ans=sumn();
    cout<<"sum is:"<<ans<<endl;

    ans=sumn();
    cout<<"sum is:"<<ans<<endl;

    ans=sumn();
    cout<<"sum is:"<<ans<<endl;

    //  ans=sumn(n);
    // cout<<"sum is:"<<ans;

    //  ans=sumn(n);
    // cout<<"sum is:"<<ans;

        // cout<<"sum is:"<<sumn(n)<<endl;


    return 0;
}