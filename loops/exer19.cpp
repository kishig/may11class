#include<iostream>

using namespace std;

int main() {
	int num, lDigit, reverse = 0;
	

	cout << "Input any num: ";
	cin >> num;
	
	//int temp = num;
	

	while (num != 0)
	{
		reverse = (reverse * 10)+(num%10);
		num /= 10;
	}
	
	while (reverse != 0)
	{
	
		
		switch(reverse %10)
		{
			case 0:
				cout << " zero ";
				break;		
			case 1:
				cout << " one ";
				break;
			case 2:
				cout << " two ";
				break;
			case 3:
				cout << " three ";
				break;
			case 4:
				cout << " four ";
				break;
			case 5:
				cout << " five ";
				break;
			case 6:
				cout << " six ";
				break;
			case 7:
				cout << " seven ";
				break;
			case 8:
				cout << " eight ";
				break;
			case 9:
				cout << " nine ";
				break;			
				
		}
		
		reverse /= 10;	
				
	}

	

	
	return 0;
}	
	
