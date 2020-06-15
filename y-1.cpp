#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;


int main()
{

    string S;
    string C;

    cin >> S >> C;

    set <char> gems;
    int stones = 0;

    for (int i = 0; i < S.size(); i++)
    {
        gems.insert(S[i]);
    }

    set <char> :: iterator it = gems.begin();

    /*   for (int i = 0; i < gems.size(); i++)
       {
           cout << *it << endl;
           it++;
       }
     */

    for (int i = 0; i < C.size(); i++)
    {
        if (gems.find(C[i]) != gems.end()) {

            stones ++;
        }


    }


    cout << stones;

    return 0;




}

