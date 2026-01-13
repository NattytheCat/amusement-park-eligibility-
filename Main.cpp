#include <iostream>
using namespace std;

int main() {
int age;
int height;

cout << "Welcome to the Amusement Park Ride Eligibility Checker!" << endl;

cout << "Please enter your age: ";
cin >> age;

cout << "Please enter your height in inches: ";
cin >> height;

if (age >= 10 && height >= 48) {
cout << "Congratulations! You are eligible to ride." << endl;
}
else if (age < 10 && height < 48) {
cout << "Sorry, you are too young and too short to ride." << endl;
}
else if (age < 10) {
cout << "Sorry, you are too young to ride." << endl;
}
else {
cout << "Sorry, you are not tall enough to ride." << endl;
}

return 0;
}
