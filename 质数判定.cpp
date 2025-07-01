#include <iostream>
using namespace std;
int main()
{
    for (;;)
    {
        int X;
        int I;
        int A = 0;
        cout << "请输入一个整数数:" << endl;
        cin >> I;
        {
            {
               
            }
            if (I > 1)                                    
            {
                for (X = 2; X < I; X++)
                {
                    if (I % X == 0)
                    {
                        A = 1;
                        cout << "不是质数" << endl;
                        break;
                    }
                }
                {
 
                
 
                    if (A == 0)                           
                    {
                        cout << "是质数" << endl;
                        
                    }
                }
            }   }
        if (I == 1 || I == 0)                                       
        {
            cout << "不是质数" << endl;
        }
    }
}