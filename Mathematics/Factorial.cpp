#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    long long result = 1;       //Here int was not used as int can only store upto 3 Billion numbers but long long can go way beyond 
    for(int i = 2;i<=n;i++){    //On the input of 13 the output we were getting was incorrect
        result = result*i;
    }
    cout<<result;
}