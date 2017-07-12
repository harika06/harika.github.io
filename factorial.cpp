#include <iostream>
using namespace std;
int main() {
        int n,f = 1;
        cout<<"Enter n:";
        cin>>n;
        while (n >= 1) {
                f = f * n;
                n = n - 1 ;
        }
        cout<<"Factorial = "<<f;
        return 0;
}
