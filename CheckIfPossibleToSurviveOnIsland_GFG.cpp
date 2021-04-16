//Check if it is possible to survive on Island
//CORRECT GFG

void isSurvivalPossible(int s, int n, int m)
{
    //we can't buy enough food for a day
    if (m > n)
        cout << "NO";
    else
    {
        bool possible;

        //if we can not survive for 7 days with 6 days food then survival not possible
        if (7*m > 6*n && s>6)
        {
            possible = false;
        }
        else
        {
            possible = true;
            int buyDay = (m * s) / n;

            //for example we need 20 and in one day we can buy 16 then we will buy 2 times
            if (m * s > n)
                buyDay++;
        }

        if (possible)
            cout << "YES " << buyDay;
        else
            cout << "NO";
    }
}