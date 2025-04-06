//Exactly Finding numbers will 3 Divisors(Only prime numbers square can have 3 divisors)
#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n<2){
        return false;
    }
    for(int i = 2; i<= sqrt(n);i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

bool divisors(int a){
    int root = sqrt(a);
    return prime(root);
}
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    if(divisors(a)){
        cout<<a<<" is having 3 divisors.";
    }
    else{
        cout<<a<<" is not having 3 divisors.";
    }
}