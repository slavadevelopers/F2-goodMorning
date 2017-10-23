#include <iostream>

using namespace std;

int main()
{
    short int h;
    cin >> h;
    if (h >= 8 && h <= 10) {
        cout << 1 << endl;
        return 0;
    }
    if (h >= 11 && h <= 17) {
        cout << 2 << endl;
        return 0;
    }
    if (h >= 18 && h <= 22) {
        cout << 3 << endl;
        return 0;
    }
    return 0;
}
