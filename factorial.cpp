#include<iostream>
using namespace std;
int factN(int n){
    int fact=1;

    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;

}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

    // int ans=factN(n);
    // cout<<"factotial is:"<<ans<<endl;
    
    cout << "Factorial is: " << factN(n);

    
    return 0;
}