#include<iostream>
using namespace std;
int gcd(int a, int b){
    int result = min(a, b);
    while(result > 0){
       if(result % a == 0 && result % b == 0){
            break;
        }
        result--;
    }
    return 1;
}
int main(){
    int a , b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<gcd(a,b);

}