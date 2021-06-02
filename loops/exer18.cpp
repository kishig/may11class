#include<iostream>

using namespace std;

int main() {
	int num, lDigit;
	
	int freq[10];
	
	cout << "Input any num: ";
	cin >> num;
	
	int temp = num;
	
	for (int i = 0; i < 10; i++)
	{
		freq[i] = 0;
	}
	
	while (num > 0)
	{
		lDigit = num%10;
		freq[lDigit]++;
		num /= 10;
		//cout << "num " << num << "lDigit " << lDigit << " frequency " << freq[lDigit] << endl;
				
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << "Frequency of " << i << " = " << freq[i] << endl;
		
	}
	

	
	return 0;
}	
	
