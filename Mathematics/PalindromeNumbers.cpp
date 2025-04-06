#include<iostream>
using namespace std;
bool ispalindrome(int number){
    int originalnumber = number;
    int reversednumber = 0;
    
    while(number > 0){
        int lastdigit = number % 10;
        reversednumber = (reversednumber * 10) + lastdigit;
        number /= 10;
    }

    return originalnumber == reversednumber;
}

int main(){
    int number;
    cout<<"Enter the number you wanna check: ";
    cin>>number;

    if(ispalindrome(number)){
        cout<<number<<" is a palindrome\n";
    }
    else{
        cout<<number<<" is not a palindrome\n";
    }
}