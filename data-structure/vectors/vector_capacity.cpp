#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);

    cout << "Size of the Vector = " << vec.size() << endl;         // 5
    cout << "Capacity of the Vector = " << vec.capacity() << endl; // 8

    return 0;
}