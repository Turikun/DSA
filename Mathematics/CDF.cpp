//Counting Digits in a factorial
//Here we will use a algorithm
//Diving the number with minimum value of 10 required to make it <= 1
//And adding 1 in the output will give the answer for number digits in the output
#include<bits/stdc++.h>
using namespace std;
int countingdigits(int N){
    long long result = 1;
    for(int i = 2; i<=N; i++){
        result *= i;
    }
    double logsum = log10(result);
    return floor(logsum) + 1;
}
int main(){
    int N;
    cout<<"Enter the number: ";
    cin>>N;
    cout<<countingdigits(N);
}