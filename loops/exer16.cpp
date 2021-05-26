#include<iostream>

using namespace std;

int main() {
	int i, num, reverse = 0, lDigit;
	
	cout << "Input any num: ";
	cin >> num;
	
	int temp = num;
	
	
	for (; num!= 0; i--)
	{
		lDigit = num%10;
		reverse *= 10;
		reverse += lDigit;
		num /= 10;
									
		cout << "lDigit: " << lDigit << " num " << num << " reverse " << reverse << endl;	
	}
	
	cout << "Reverse of " << temp << " = " << reverse << endl;
		
	
	
	return 0;
}
