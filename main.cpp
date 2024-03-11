#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    int i = 60;

    while ( i >= 0) {
        cout << i << endl;
        i--;
        Sleep(1000);
    }

    cout << "Minela minuta" << endl;

    return 0;
}
