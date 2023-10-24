#include <iostream>
using namespace std;

int main()
{
    int tablicaXY[4][5] = {
        {1,2,3,4,17},
        {5,6,7,8,18},
        {9,10,11,12,19},
        {13,14,15,16,20}
    };
    cout << tablicaXY[1][1] << endl;
    cout << tablicaXY[3][2] << endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;
    int wiersze = sizeof(tablicaXY) / sizeof(tablicaXY[0]);
    int elementy = sizeof(tablicaXY[0]) / sizeof(int);
    cout << wiersze << " " << elementy << endl; 

    return 0;
}