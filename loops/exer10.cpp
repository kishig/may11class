#include<iostream>

using namespace std;

int main() {
	int num, digit = 0;
	
	cout << "Input num: ";
	cin >> num;
	
	do
	{
		digit++;
		//cout << "digit " << digit << "num " << num << endl;
		num /= 10;
		
	} while (num != 0);
	/*for (int i = 0; i <= num; i++)
	{
		if (num != 0)
		{	
			digit++;				
			num /= 10;						
		}
		
	}*/
	cout << "Number of digits: " << digit << endl;
	
				
	return 0;
}
