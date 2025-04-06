#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int count = 0;
    do
    {
        a = a/10;
        count++; 
    } while (a!=0);
    cout<<"The number of digits is"<<count;
}