#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1;
    vector<int> vec2 = {1, 2, 3, 4, 5};
    vector<int> vec3(5, 0);

    // cout << vec1[0]; // Segementation fault as there is no element in vec1
    cout << "First Element in vec2 = " << vec2[0] << endl;

    cout << "All elments of vec2 using the for each loop" << endl;
    for (int i : vec2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "All elments of vec3 using the for each loop" << endl;
    for (int i : vec3)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}