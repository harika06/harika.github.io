#include <iostream>
using namespace std;
int main() {
        int n,sum = 0,d;
        cout << "Enter n";
        cin >> n;
        while (n > 0) {
                d = n % 10;
                sum = sum + d;
                n = n / 10;
        }
        cout << "sumOfDigits = "<<sum;
        return 0;
}
