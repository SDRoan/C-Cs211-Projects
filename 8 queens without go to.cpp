#include <iostream>
using namespace std;


bool ok(int q[], int c)
{
    for (int i = 0; i < c; i++)
    {
        if ((q[i] == q[c]) || ((c - i) == abs(q[c] - q[i]))) 
        {
            return false;
        }
    }
    return true;
}

void backtrack(int &c)
{
    c--; 
    if (c == -1)
    {
        exit(0);
    }
}

void print(int q[])
{
    static int numSolutions = 1;
    cout << "Solution number " << numSolutions++ << ":";
    cout << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (q[i] == j)
            {
                cout << "1 ";
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int q[8] = {}; 
    int c = 0;     

    while (c >= 0)
    {        
        c++; 

        if (c == 8)
        {
            print(q);     
            backtrack(c); 
        }
        else
        {
            q[c] = -1;
        }
        while (c >= 0)
        {
            q[c]++; 

            if (q[c] == 8)
            { 
                backtrack(c);
            }
            else
            {
                if (ok(q, c) == true)
                {
                    break; 
                }
            }
        }
    }
    return 0;
}