#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, temp;

    cout << "Enter a number: ";
    cin >> num;

    bool div2 = (num % 2 == 0);

    temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    bool div3 = (sum % 3 == 0);

    if (div2 && div3)
        cout << num << " is divisible by 6";
    else
        cout << num << " is not divisible by 6";

    return 0;
}
