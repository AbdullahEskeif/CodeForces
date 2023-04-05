#include <iostream>
using namespace std;
int main()

{
   int year; 
   cin >> year;
   if (year >= 8976 && year < 9001)
       cout << 9012 << endl;
   int g;
   int yeararray[4];
   int N = 0;
   for (int j = year + 1; j < 9000; j++){
   int tempyear = j;
       for ( int i = 0; i < 4; i++)
   {
       
       g = tempyear%10;
       yeararray[i] = g;
       tempyear = int(tempyear /10);
}
  if ( yeararray[0] == yeararray[1] || yeararray[0] == yeararray[2] || yeararray[0] == yeararray[3] || yeararray[1] == yeararray[2] || yeararray[1] == yeararray[3] || yeararray[2] == yeararray[3])
    {
        N = 1;
    }
    if(N == 1){
        N = 0;
        continue;
              }
    else {
        cout << j << endl;
        break;
         }
}

    return 0;
}
