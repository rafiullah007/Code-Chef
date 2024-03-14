#include <iostream>
#include <iomanip>

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */

using namespace std;


void ANS(int x, double y, double sum)
{
    if(x%5!=0)
    {
        cout << fixed << setprecision(2) << y << endl;
    }
    else
    {
        sum = x+0.50;
        if(sum>y)
        {
            cout << fixed << setprecision(2) << y << endl;
        }
        else
        {
            double ans = y - sum;
            cout << fixed << setprecision(2) << ans << endl;
        }
    }
}


int main()
{
    int x;
    double y;
    double sum(0.00);
    cin >> x >> y;
    ANS(x,y,sum);
    return 0;
}


