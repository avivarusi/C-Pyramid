//
//  main.cpp
//  Pyramid
//
//  Created by Aviv Arusi on 2/18/18.
//  Copyright © 2018 Aviv Arusi. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int i, n, p, pyramid, origempty, empty, star, row, rowlength;
    cout << "Hello Aviv how many rows do you want your pyramid to have?: " << endl ;
    cin >> pyramid;
    p = pyramid + 1;
    row = 1;
    star = 1;
    empty = p;
    for (i=1; i<p; i++)                             //row number, everything in this loop is for one row
    {
        row++;
        empty = p - row;
        rowlength = empty + star;
        for (rowlength; rowlength>0; rowlength--)
        {
            if (empty > 0)
            {
                cout << " ";
                empty--;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
        star = star + 2;
    }
    return 0;
}
