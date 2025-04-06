#include<iostream>
using namespace std;
bool prime(int n) {
    if (n == 1) {
        return false;
    }

    for(int i = 2; i * i <= n; i++){        //Here we checked till sqaure root of the given number cause if a and b 
        if(n % i == 0) {                    //are factors of n then a or b has to be less than sqaure root of n
            return false;                   //if both are greater than square root of n then product of them will
        }                                   //be greater than n.
    }
    return true;                            //Here return has to return outside the for loop else if the for loop finds a false
}                                           //and return true is inside the loop then after the first false statement it will 
                                            //return true without checking further loop will exit and answer will be wrong.
int main(){
    int n;

    cout << "Enter the number: ";
    cin >> n;
    if (prime(n)) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }

    return 0;
}