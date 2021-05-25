#include<iostream>

using namespace std;

int main() {
	int num;
	cout << "Please enter any number to check whether it is a negative num or positive or equal to zero " << endl;
	cin >> num;
	
	if (num>0)
	{
		cout << "The number you have entered is positive" << endl;
	}
	else if (num < 0)
	{
		cout << "The number you have entered is negative"<< endl;	
	}
	else
	{
		cout << "The number you have entered is equal to zero"<< endl;
	}
	
		
	
	return 0;
}
