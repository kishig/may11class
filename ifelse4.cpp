#include<iostream>

using namespace std;

int main() {
	int num;
	cout << "Please enter your number " << endl;
	cin >> num;
	
	if (num % 5 == 0)
	{
		if(num % 11 == 0)
		{
			cout << "The number you have entered is divisible by 5 and 11" << endl;
		}
		else
		{
			cout << "The number you have entered is divisible by only 5" << endl;
		}
		
	}
	else if (num % 11 == 0)
	{
		if(num % 5 == 0)
		{
			cout << "The number you have entered is divisible by 5 and 11" << endl;
		}
		else
		{
			cout << "The number you have entered is divisible by only 11" << endl;
		}
	}
	else
	{
		cout << "The number you have entered is not divisible by neither 11 nor 5" << endl;
	}
	
		
	
	return 0;
}
