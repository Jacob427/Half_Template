/*
Jacob Amerin
CIS 1202
7/21/2022
*/

#include <iostream>
using namespace std;


template <typename t>
t half(t number) {
	return number / 2;
}

int half(int number){
	return round(static_cast<double>(number) / 2);
}


int main() {
	double a = 13;
	float b = 7.5;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
}
