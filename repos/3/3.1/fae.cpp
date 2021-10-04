#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int count = 1;
	int a;
	cin >> a;
	int b = 1;
	while (count<=a) 
	{
		b = 2 * b;
		count++;
	} 
	cout << b;
}