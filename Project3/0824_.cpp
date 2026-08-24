#include<iostream>
using namespace std;

int main(void)
{
	int number[5] = {35.82,17,96,54};
	int* pNum;
	int Max;

	pNum = number;

	Max = *pNum;
	
	for (int i = 0; i < 5; i++)
	{
		if (*(pNum + i) > Max)
		{
			Max = *(pNum + i);
		}
	}

	cout << "Å‘å’l" << Max << endl;

	return 0;
}