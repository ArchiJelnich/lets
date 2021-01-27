#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main()
{
    int bin[10] = {0, 0, 1, 1, 0, 0, 1, 1, 1, 1};
    set <int> lengths;
    int current_v = 0;

    for (int i = 0; i < 10; i++)
    {
        if (bin[i]==0)
        {
            current_v = 0;
        }

        else
            {
            current_v++;
        }

        lengths.insert(current_v);

    }


    set <int> :: iterator it = lengths.end();
    it--;


    cout << *it << endl;




return 0;




}

