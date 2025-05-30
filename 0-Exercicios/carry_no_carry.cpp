#include <iostream>

using namespace std;

int main()
{
    unsigned int a;
    unsigned int b;

    while(cin >> a >> b)
    {
        cout << (a ^ b) << endl;
    }
    return (0);
}