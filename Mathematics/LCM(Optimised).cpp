//Here we will use the formula a*b = gcd(a,b) * lcm(a,b)
//We will find gcd using eucledian algorithm
#include<iostream>
using namespace std;
int gcd(int a , int b){
    if (b == 0){
        return a;
    }
    return gcd(b,a%b);
}
int lcm(int a , int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int a ,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<lcm(a,b);
}