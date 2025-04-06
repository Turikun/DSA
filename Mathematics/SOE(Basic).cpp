//Sieve of Eratosthenes
//This algorithm is used to print the prime number less than the given number
#include<iostream>
using namespace std;
bool isprime(int n){                    //prime checking function
    if(n <= 1){
        return false;
    }
    for(int i = 2;i*i<=n;i++){
        if(n % i == 0){
        return false;
    }
    return true;                       
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 2;i<=n;i++ ){           //i iterates and checks for the condition if the function checked is a prime
        if(isprime(i)){                 //It will print the i and will keep on going in thge loop until the conditions are not met
            cout<<i<<" ";
        }
    }
}