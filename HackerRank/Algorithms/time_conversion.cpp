#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char str[10];
    cin>>str;
    int h1 = int(str[0])-'0';
    int h2 = int(str[1])-'0';
    int hh = h1*10 + h2%10;
    if (str[8] == 'A')
    {
        if (hh == 12)
        {
            cout << "00";
            for (int i=2; i <= 7; i++)
                cout << str[i];
        }
        else
        {
            for (int i=0; i <= 7; i++)
                cout << str[i];
        }
    }
    else
    {
        if (hh == 12)
        {
            cout << "12";
            for (int i=2; i <= 7; i++)
                cout << str[i];
        }
        else
        {
            hh = hh + 12;
            cout << hh;
            for (int i=2; i <= 7; i++)
                cout << str[i];
        }
    }
    
    return 0;
}