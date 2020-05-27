#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main()
{

    vector<int> spiralOrder;
    vector<vector<int>> matrix;



/*

Input:
[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
Output: [1,2,3,6,9,8,7,4,5]
    */

vector <int> str;

str.push_back(1);
str.push_back(2);
str.push_back(3);

matrix.push_back(str);

str.clear();
str.push_back(4);
str.push_back(5);
str.push_back(6);

matrix.push_back(str);

str.clear();

str.push_back(7);
str.push_back(8);
str.push_back(9);

matrix.push_back(str);

str.clear();

    int hor_1 = 0;
    int hor_2 = matrix[0].size();
    int ver_1 = 0;
    int ver_2 = matrix.size();


for (int i = 0; i < matrix[0].size(); i++)
{
    for (int j = 0; j < matrix.size(); j++)
    {
        cout << matrix[i][j] << " ";

    }

    cout << endl;
}

cout << endl;

while ((spiralOrder.size()!=(matrix[0].size() * matrix.size())))
{

    // >>>
    if((spiralOrder.size()!=(matrix[0].size() * matrix.size()))) {
        for (int i = hor_1; i < hor_2; i++) {
            spiralOrder.push_back(matrix[ver_1][i]);
            cout << matrix[ver_1][i] << " ";
        }
        ver_1++;
    }


    // \/\/\/
    if((spiralOrder.size()!=(matrix[0].size()*matrix.size())))
    {
    for (int j = ver_1; j < ver_2; j ++)
    {
        spiralOrder.push_back(matrix[j][hor_2-1]);
        cout << matrix[j][hor_2-1] << " ";
    }
    hor_2--;}

    // <<<
    if((spiralOrder.size()!=(matrix[0].size()*matrix.size()))){
    for (int i = hor_2-1; i >= hor_1; i--)
    {
        spiralOrder.push_back(matrix[ver_2-1][i]);
        cout << matrix[ver_2-1][i] << " ";
    }
    ver_2--;}

    //^^^
    if((spiralOrder.size()!=(matrix[0].size()*matrix.size()))){
    for (int j = ver_2-1; j >= ver_1; j --)
    {
        spiralOrder.push_back(matrix[j][hor_1]);
        cout << matrix[j][hor_1] << " ";
    }
    hor_1++;}

}





return 0;

}
