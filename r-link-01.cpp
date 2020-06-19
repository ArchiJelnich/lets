#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <list>
using namespace std;


int main()
{

list <int> current = {1, 2, 3, 4, 5, 6};
list <int> :: iterator it = current.begin();
for (int i = 0; i < current.size(); i++, it++)
{
    cout << *it << " ";
}
cout << endl;

list <int> new_current;

it = current.end();
it--;

for (int i = 0; i < current.size(); i++, it--)
    {
        new_current.push_back(*it);
    }

list <int> :: iterator new_it = new_current.begin();

for (int i = 0; i < new_current.size(); i++, new_it++)
    {
        cout << *new_it << " ";
    }

    return 0;




}



