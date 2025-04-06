// C++ program to find modular
// inverse of A under modulo M
#include <bits/stdc++.h>
using namespace std;

// A naive method to find modular
// multiplicative inverse of 'A'
// under modulo 'M'

int modInverse(int A, int M) {
  
      if(__gcd(A, M) > 1){
          
          // modulo inverse does not exist
          return -1;
    }
    if(M == 1){
        return -1;
    }
    for (int X = 1; X < M; X++)
        if (((A % M) * (X % M)) % M == 1)
            return X;
}

int main() {
    int A = 2, M = 1;

    cout << modInverse(A, M);
    return 0;
}