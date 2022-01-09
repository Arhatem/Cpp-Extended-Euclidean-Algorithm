#include <iostream>

using namespace std;

int func1(unsigned long long a,unsigned long long b,unsigned long long c,unsigned long long d)
{
    static unsigned long long i = 1 ;
    while (a<b)
    {
        a=a+c;
        i++;
    }
    if ((a%b) == 1)
        cout << d - (c%d)  <<" "<<i;
    else if ((a%b) == 0)
        cout << "IMPOSSIBLE" ;
    else if (((a%b) != 0)&&((a%b) != 1) )
    {
        i++;
        a=(a%b)+c;
        return func1(a,b,c,d);
    }
}
int main()
{
    unsigned long long a, b, c, d ;
    cin >> b >> a ;
    c = a ;
    d = b ;
    func1(a,b,c,d);
    return 0;
}
