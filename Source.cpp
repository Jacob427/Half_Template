/*
Jacob Amerin
CIS 1202
7/21/2022
*/

#include <iostream>
using namespace std;



double half(double number) {
	return number / 2;
}

float half(float number) {
	return number / 2;
}

int half(int number){
	return round(static_cast<double>(number) / 2);
}


int main() {
	double a = 7;
	float b = 5;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
}
