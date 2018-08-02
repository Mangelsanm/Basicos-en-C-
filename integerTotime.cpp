#include <iostream>
using namespace std;

const int HOUR_SECONDS = 3600;
const int MINUTE_SECONDS = 60;

int main(){
    int nValue = 0;
    cout << "Integer to show in time format: " << flush;
    cin >> nValue;
    cout << "Original value: " << nValue << endl;

    int hours = nValue / HOUR_SECONDS;
    int minutes = (nValue % HOUR_SECONDS) / MINUTE_SECONDS;
    int seconds = (nValue % HOUR_SECONDS) % MINUTE_SECONDS;

    cout << "Time format: " << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}
