#include<iostream>
using namespace std;
int countzero(int n){
    int fact = 1;
    for(int i = 2;i<= n;i++){
        fact = fact*i;
    }
    int result = 0;
    while(fact%10 == 0){
        result++;
        fact = fact/10;
    }
    cout<<result;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>> n;
    countzero(n);
}