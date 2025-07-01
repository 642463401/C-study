#include <iostream>
using namespace std;
int narcissistic(int number);
int main()
{
	for (;;)
	{
		int a, x, iCount, i;
		
		cout << "输入水仙花数位数:"; cin >> x;
		
		a = pow(10, x), iCount = pow(10, (x - 1));
		if (x >= 3)
		{
			for (i = pow(10, (x - 1)); i <= a; i++)
			{
				iCount++;
				if (narcissistic(iCount) == 1)
				{
					cout << iCount << endl;
				}
			}
 
		}
		else
		{
			cout << "输入错误请重新输入（大于3）" << endl;
		}
	}
}
	int narcissistic(int number)
	{
		int ws = 0;   
		int sz = number;
		while (sz != 0)
		{
			sz /= 10;
			ws++;
		}
		int H = 0;
		int SZ = number;
		while (SZ != 0)
		{
			int MS = SZ % 10; 
			H += pow(MS, ws);
			SZ /= 10;
		}
		if (H == number)
			return 1;
		else
			return 0;
	}