#include<iostream>

using namespace std;

int main() {
	int num = 1;
	
	for (; num <= 100; num++)
	{
		if (num % 2 != 0)
			cout << num << " ";
	}
				
	return 0;
}
