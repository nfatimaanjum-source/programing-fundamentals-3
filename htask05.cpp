#include<iostream>
using namespace std;
main()
{

    int holidays, workingDays, totalPlayTime, diff;
    int norm = 30000;

    cout << "Holidays: ";
    cin >> holidays;

    workingDays = 365 - holidays;
    totalPlayTime = (workingDays * 63) + (holidays * 127);

    if (totalPlayTime <= norm)
    {
        diff = norm - totalPlayTime;
        cout << "Tom sleeps well" << endl;
        cout << diff / 60 << " hours and " << diff % 60 << " minutes less for play" << endl;
    } 
    else
    {
        diff = totalPlayTime - norm;
        cout << "Tom will run away" << endl;
        cout << diff / 60 << " hours and " << diff % 60 << " minutes excess for play" << endl;
    }

}