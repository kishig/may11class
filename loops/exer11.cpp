#include<iostream>

using namespace std;

int main() {
	int fDigit, lDigit, num;
	
	cout << "Input num: ";
	cin >> num;
	
	lDigit = num%10;
	
	fDigit = num;
	

	for (int i = 1; i<= fDigit; i++)
	{
						
		if (fDigit >= 10)
		{
			fDigit /= 10;
		}
		else
		{
			break;
		}
			
	}
		
	cout << "First digit: " << fDigit << endl;
	cout << "Last digit: " << lDigit << endl;
	
	return 0;
}
