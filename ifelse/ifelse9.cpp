#include<iostream>

using namespace std;

int main() {
	char letter;
	cout << "Please enter a character: ";
	cin >> letter;
	
	cout << endl;
	
	if ((letter >= 'a'&& letter <= 'z') || (letter >= 'A'&& letter <= 'Z'))
	{
		cout << letter << " is an alphabet" << endl;
	
	}
	else if (letter >= '0'&& letter <= '9')
	{
		cout << letter << " is a number" << endl;
	}
	else
	{
		cout << letter << " is a special character" << endl;
	}
	
		
	
	return 0;
}
