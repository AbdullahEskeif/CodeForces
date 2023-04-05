#include <iostream>
using namespace std;
int main () {
int space;
cin >> space; 
if (space%5 == 0)
    cout << space/5 << endl;
else 
    cout << (space/5) + 1 << endl;
    return 0;
}
