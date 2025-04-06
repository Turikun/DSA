#include<iostream>
using namespace std;
int lcm(int a, int b){                           
    int result = max(a,b);
    while(true){                                    //while loop runs until the statement inside it is true
        if(result % a == 0 && result % b == 0){     //conditions checks where the max of both number divides both or not 
            return result;
        }
        result++;
    }
}
int main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    cout<<lcm(a,b);
}