#include <iostream>
using namespace std; 

int doubled_number(int x)
{
	int doubled_number = x * 2;
	if (doubled_number >= 10)
	{
		doubled_number = 1 + doubled_number % 10;

	}
	return doubled_number; 
}

void main() {
	char digit;
	int odd_sum=0, even_sum=0; 
	int i = 0;
	cout << "Enter a number to be validated" << endl;
	digit=cin.get();
	while(digit !=10)
	{
		if (i % 2 == 0)
		{
			int val = digit; 
			val -= 48;
			odd_sum += doubled_number(val); 
			even_sum += digit - '0'; 
		}
		else
		{
			odd_sum += digit-'0';
			even_sum= doubled_number(digit-'0');
		}
		cin.get(digit); 
		i++; 
		
	}
	int checksum; 
	if ((i-1)%2 == 0) {
		checksum = even_sum;
	}
	else
	{
		checksum = odd_sum;
	}
	
	if (checksum % 10 == 0)
		cout << "Checksum is valid" << endl;
	else
		cout << "Checksum is invalid" << endl; 


	
}                                                                                                                                                                                                                                 