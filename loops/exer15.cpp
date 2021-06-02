#include<iostream>

using namespace std;

int main() {
	int i, num, product = 1;
	
	cout << "Input any num: ";
	cin >> num;
	
	int temp = num;
	
	for (; num!= 0; i--)
	{
		product *= num%10;
		num /= 10;								
		//cout << "sum: " << sum << "num " << num << endl;	
	}
	
	cout << "Product of digits: " << product << endl;
		
	
	
	return 0;
}
