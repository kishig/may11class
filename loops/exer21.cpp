#include<iostream>

using namespace std;

int main() {
	
	int num, expo;
	
	cout << "Input base: ";
	cin >> num;
	cout << "Input exponent: ";
	cin >> expo;
	
	int power = 1;

	
	for (int i = 1; i <= expo; i++)
	{
		power *= num;
	}
	
	cout << num << " ^ " << expo << " = " << power << endl;
	return 0;
}	
		
	
