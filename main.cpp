/*

Программа не работает почему в ближайщее врнемя
программу починил!


для теста размер введите 5 и эти цифры 72 69 76 76 79 вывод HELLO и так со всем ASCII
	*/

https://github.com/Gerakl1123/ASCII/blob/master/main.cpp#L5
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
