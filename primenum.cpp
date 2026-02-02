#include<iostream>
using namespace std;

bool notprime(int n){

    for(int i=2;i<n;i++){

        if(n%i==0){
            return 0;
            //is not a prime
        }
        else{
            return 1;
        }
    }

}

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

    int ans=notprime(n);
    if(ans==0){
        cout<<n<<" is not prime"<<endl;
    }
    else{
        cout<<n<<" is prime"<<endl;
    }

    return 0;

}