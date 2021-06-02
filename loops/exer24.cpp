#include<iostream>

using namespace std;

int main() {
	
	int num1, num2, hcf = 1;
	
	cout << "Input first number: ";
	cin >> num1;
	cout << "Input second number: ";
	cin >> num2;
	
	int min;
	if (num1>num2)
	{
		min = num2;
	}
	else
	{
		min = num1;
	}

	for (int i = 1; i <= min; i++)
	{
		if ((num1%i==0) && (num2%i==0))
		{
			hcf = i;
		}
		
	}
	
	cout << "HCF of " << num1 <<" and " << num2 << ": " << hcf << endl;
	return 0;
}	
		
	
