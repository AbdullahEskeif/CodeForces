#include <iostream>
 
using namespace std;
 
int main ()
{
int numberofDays;
cin >> numberofDays;
int moneyEachDay[numberofDays];
int accum = 0;
int sum = 0;
int save = 0;
for (int i = 0;i < numberofDays;i++){
    cin >> moneyEachDay[i];
}
for (int j = 0;j < numberofDays;j++){
    if(moneyEachDay[j] >= sum){
        accum += 1;
    if(accum >= save){
    save = accum;
    }
    }
    else{
        accum = 1;
    }
 
sum = moneyEachDay[j];
 
}
cout << save << endl;
return 0;
 
}
