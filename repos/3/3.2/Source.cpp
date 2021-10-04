#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int d;
	cin >> d;
	for (int s = 1; s < d; ++s)
		{
			for (int g = ((s * (s + 1)) / 2)-s+1; (s*(s+1 ))/2>= g&&g<=d; ++g)
				printf("%4d", g);
			cout << endl;
		}
		cout << endl;
	return EXIT_SUCCESS;
}