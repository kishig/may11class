#include<iostream>

using namespace std;

int main() {
	int i, num, sum = 0;
	
	cout << "Input any num: ";
	cin >> num;
	
	int temp = num;
	
	for (; num!= 0; i--)
	{
		sum += num%10;
		num /= 10;								
		//cout << "sum: " << sum << "num " << num << endl;	
	}
	
	cout << "Sum of digits: " << sum << endl;
		
	
	
	return 0;
}
