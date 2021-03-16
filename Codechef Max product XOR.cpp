#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int i, a = 0, b = 0, c, flag = 1, msb;
        cin >> c;

        for (i = 31; i >= 0;i--) // to find the msb of c
        {
            if((1<<i)&c)
            {
                msb = i;
                break;
            }
        }
        
        for (i = msb; i >= 0;i--) // if a bit in c=0 then set that bit in both a and b to 1 else set first bit in a to 1 and rest all bits in b to 1
        {
            if((1<<i)&c)
            {
                if(flag)
                {
                    a |= (1 << i);
                    flag = 0;
                }
                else
                {
                    b |= (1 << i);
                }
            }
            else
            {
                a |= (1 << i);
                b |= (1 << i);
            }
        }

        cout << a * b << "\n";
    }
}