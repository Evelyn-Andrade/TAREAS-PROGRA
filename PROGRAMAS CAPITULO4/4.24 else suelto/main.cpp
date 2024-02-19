#include <iostream>

using namespace std;

int main()
{
   int x = 5;
    int y = 8;

    if (y == 8) {
        if (x == 5) {
            cout << "00000" << endl;
        } else {
            cout << "#####" << endl;
        }
    }
    cout << "$$$$$" << endl;
    cout << "&&&&&" << endl;
    return 0;
}
