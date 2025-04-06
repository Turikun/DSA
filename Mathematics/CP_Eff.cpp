//Efficient Solution for computing powers
#include<iostream>
using namespace std;
int powers(int x, int n){
    if (n == 0){                    //This part will return 1 if power is 0
        return 1;
    }
    int temp = powers(x,n/2);      //Saves the half of the calculation in temporary
    temp = temp * temp;            //squaring the temperoray to make the calculations right
    if(n%2 == 0){                  //If the power is even then the time taken here will be half of the full calculation and
        return temp;               //and will only need to square half of the result
    }
    else{
        return temp * x;           //If the Power is odd then we multiply the temp with x to give the solution
    }
}
int main(){
    int x,n;
    cout<<"Enter the Base: ";
    cin>>x;
    cout<<"Enter the Power: ";
    cin>>n;
    cout<<powers(x,n);
}