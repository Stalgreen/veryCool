#include <iostream>
using namespace std;
#include <windows.h>
#include <math.h>
#include <iomanip>


int main()
{
    float minX, maxX, h, x;
    double y;
    cout << "Input number: ";
    cin >> minX >> maxX >> h;
    x = minX;
    while (x <= maxX + h / 2) {
        y = log(pow(x, 3)) + 2 * cos(x) - 2;
        cout << x << setw(25) << y << endl;
        x += h;
        Sleep(35);
    }


}
