#include<iostream>

using namespace std;

int main() {
	int angle1, angle2, angle3;
	
	cout << "Input first angle: ";
	cin >> angle1;
	cout << endl << "Input second angle: ";
	cin >> angle2;
	cout << endl << "Input third angle: ";
	cin >> angle3;
	
	if (angle1 + angle2 + angle3 == 180)
	{
		if (angle1 > 0 && angle2 > 0 && angle3 > 0)
		{
			cout << "The triangle is valid" << endl;
		}
		else
		{
			cout << "The triangle is invalid" << endl;
		}
						
	}
	else
	{
		cout << "That is not a triangle, all three angles summation needs to be equal to 180." << endl;
	}
	
		
	
	return 0;
}
