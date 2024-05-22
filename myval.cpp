#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    registerValidation(argc, argv);
    int testCount = inf.readInt(1, 20, "testCount");
    for(int i=0; i<testCount; i++)
    {
        inf.readEoln();
        setTestCase(i+1);
        int n = inf.readInt(2, 10000, "n");
        inf.readEoln();
        int x = inf.readInt(0, n/3, "x");
        inf.readSpace();
        int y = inf.readInt(0, n/2, "y");
        ensuref(3*x+2*y==n, "3x+2y does not equal n");
        inf.readEoln();
        for(int j=0; j<n; j++)
        {
            int a = inf.readInt(1, n, "a");
            ensuref(a!=j+1, "Preference at position %d not correct", j+1);
            if(j!=n-1)
            {
                inf.readSpace();
            }
        }
    }
    inf.readEoln();
    inf.readEof();
    return 0;
}