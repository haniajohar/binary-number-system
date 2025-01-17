#include<iostream>
using namespace std;

//    ************Binary number system*************
int BinToDec(int num) {
	//binary to decimal conversion function
	int pow = 1;
	int ans = 0;
	while (num > 0) {
		int val= num % 10;
		if (val > 1) { //as in binary there are only 1 and 0
			cout << "it is not a binary number" << endl;
			return -1;
		}
		num = num / 10;
		ans += val * pow;
		pow = pow * 2;
	}
	return ans;
}
int decToBin(int num) {
	//decimal to binary conversion function
	int pow = 1;
	int ans = 0;
	while (num > 0) {
		int val = num % 2;
		num = num / 2;
		ans += val * pow;
		pow = pow * 10;
	}
	return ans;
}
int main() {
	
	int num;
	int choice;
	cout << "enter a number" << endl;
	cin >> num;
	cout << "which type of conversion do you want" << endl;
	cout << "press 1 for decimal To Binary conversion" << endl;
	cout << "press 2 for binary to decimal conversion" << endl;
	cin >> choice;
	//switch to choose which conversion do we want
	switch (choice) {
	case 1: {cout << "Binary :" << decToBin(num); break; }
	case 2: {cout << "Decimal :" << BinToDec(num); break; }
	}
	return 0;
}