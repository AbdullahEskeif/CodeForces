/* Notes

cin -- > string max 100 chars 
loop through each character of the string and check if it's == H or Q or 9 or + 

if it is 
    print yes 
    and terminate
if there is no matches
    print no

need to find a way to do this with Iterators OK? 
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
int g = 0;
string UserInput;
getline(cin, UserInput);

for (int i = 0; i < UserInput.length(); i++) {
 if (UserInput[i] ==  '9' || UserInput[i] == 'Q' || UserInput[i] == 'H'){
     cout << "YES" << endl;
    g = 1;
     break;
 }
}
if (g == 0) 
    cout << "NO" << endl;

    return 0;
    }
