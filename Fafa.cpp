#include <iostream>
using namespace std;
int main()
{
   int numberOfEmployees;
   cin >> numberOfEmployees;
   int numOfWays = 0;
   for ( int leaders = 1; leaders <= numberOfEmployees - leaders; leaders++){
       int normalEmployees = numberOfEmployees - leaders;
      if (normalEmployees%leaders == 0 ) {
      numOfWays += 1;
      }
      else {
        continue;
      }
   }
   cout << numOfWays << endl;
   return 0; 
}
