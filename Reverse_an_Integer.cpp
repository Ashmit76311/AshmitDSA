#include <iostream>
using namespace std;
int reverseInteger(int num) {
int reversed = 0;
while (num != 0) {
int digit = num % 10;
reversed = reversed * 10 + digit;
num /= 10;
}
return reversed;
}
int main() {
int num;
cout << "Enter an integer: ";
cin >> num;
int reversed = reverseInteger(num);
cout << "Reversed number: " << reversed << endl;
return 0;
}
