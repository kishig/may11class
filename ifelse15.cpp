#include<iostream>

using namespace std;

int main() {
	int side1, side2, side3;
	
	cout << "Input first side: ";
	cin >> side1;
	cout << endl << "Input second side: ";
	cin >> side2;
	cout << endl << "Input third side: ";
	cin >> side3;
	
	if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2))
	{
		cout << "The triangle is valid" << endl;
	
	}
	else
	{
		cout << "The triangle is invalid" << endl;
	}
							
	return 0;
}
