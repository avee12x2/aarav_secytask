#include<iostream>
#include "testlib.h"

using namespace std;

int main(int argc, char *argv[])
{
    registerGen(argc, argv, 1);
    int max_t = atoi(argv[1]);
    int t = rnd.next(1, max_t);
    int max_n = atoi(argv[1]);
    while(t--)
    {
        int n = rnd.next(2, max_n);
        int x, y;
        if(n%2==0)
        {
            x = 2*(rnd.next(0, n/6));
        }
        else
        {
            x = 2*(rnd.next(0, (n-3)/6)) + 1;
        }
        y = (n - 3*x)/2;
        cout<<n<<"\n"<<x<<" "<<y<<"\n";
        for(int i=1; i<n; i++)
        {
            int t = rnd.next(1, n);
            if(t==i)
            {
                i--;
                continue;
            }
            cout<< t << " ";
        }
        if(t)
        {
            cout<< rnd.next(1, n-1) <<'\n';
        }
        else
        {
            cout<< rnd.next(1, n-1) <<endl;
        }
    }
    return 0;
}