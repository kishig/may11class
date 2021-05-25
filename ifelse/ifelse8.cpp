#include<iostream>

using namespace std;

int main() {
	char letter;
	cout << "Please enter an alphabet: ";
	cin >> letter;
	
	cout << endl;
	
	if ((letter >= 'a'&& letter <= 'z') || (letter >= 'A'&& letter <= 'Z'))
	{
		if (letter == 'a' || letter == 'A' ||letter == 'i' || letter == 'I' ||letter == 'o' ||
		letter == 'O' || letter == 'u' || letter == 'U' || letter == 'e' || letter == 'E')
		{
			cout << "the alphabet you have entered is vowel" << endl;
		}
		else
		{
			cout << "the alphabet you have entered is consonant" << endl;
		}
		
	}
	else
	{
		cout << "Invalid input" << endl;
	}
	
		
	
	return 0;
}
