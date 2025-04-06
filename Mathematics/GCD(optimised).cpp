#include<iostream>
using namespace std;
int gcd(int a , int b){
    if(b == 0){                         //checks if the second integer is zero or not
        return a;
    }
    else{
        gcd(b,a%b);                    //if the second integer is not zero then they swap the places and does a module divison which only give remainder 
                                       //we are using euclids algorithm here
    }
}
int main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<gcd(a,b);
}