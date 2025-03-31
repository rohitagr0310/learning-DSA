#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    cout << "Vector is = {1, 2, 3, 4, 5}" << endl;

    cout << "Size = " << vec.size() << endl;

    cout << "Add element to the end of the vector = " << endl;
    vec.push_back(6);
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "Remove element from the end of the vector = " << endl;
    vec.pop_back();
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "first element of the vector = " << vec.front() << endl;

    cout << "last element of the vector = " << vec.back() << endl;

    cout << "4th element of the vector = " << vec.at(3) << endl; // 3 - 0 based index

    return 0;
}