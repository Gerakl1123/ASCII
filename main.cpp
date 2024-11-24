#include <iostream>

using namespace std;

int main()
{
	

	int asc = 0;
	int size;
	cin >> size;
	char* ch= new char[size];

	for (int i = 0; i < size; i++)
	{
		cin >> asc;
		ch[i] = asc;
	}
	for (int i = 0; i < size; i++)
	{
		cout << ch[i];
	}


	delete[] ch;
	
	return 0;
}
