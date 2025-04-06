#include<iostream>
using namespace std;
void AllDivisorOfNumber(int n){
    for(int i = 1; i<=n; i++){          //for loop iterates 
        if(n%i == 0){                   //if statement checks if the the remainder of the two is 0 or not
            cout<<i<<" ";               //prints the results after printing the loop again start's from the beginning 
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    AllDivisorOfNumber(n);              //Here the cout statement wasn't needed cause cout was already used in the function 
    return 0;
}