#include<iostream>
#include <cmath>
using namespace std;

int main() {
	int fDigit, lDigit, num, digit = 0;
	
	cout << "Input any number: ";
	cin >> num;
	
	int temp = num;
	
	lDigit = num%10;
	
	do
	{
		digit++;
		//cout << "digit " << digit << "num " << num << endl;
		num /= 10;
		
	} while (num != 0);
	
	//cout << "digit " << digit << endl;
	
	int denom = pow(10, digit-1);
	cout << "denom " << denom << endl;
	
	fDigit = temp/denom;
	
	int swappedNum = lDigit * denom;
	swappedNum += temp% denom;
	swappedNum -= lDigit;
	swappedNum += fDigit;   
		
	cout << "Number after swapping first and last digit: " << swappedNum << endl;
	
	
	return 0;
}
