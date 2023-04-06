
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num_events;
    cin >> num_events;

    cout << "\n";

    int* events = new int[num_events];
    for (int i = 0; i < num_events; i++)
    {
        cin >> events[i];
    }

    int crimes_calculation(int*, int);
    cout << crimes_calculation(events, num_events);
}

int crimes_calculation(int* ev, int n)
{
    int num_polof = 0;
    int num_crimes = 0;
    for (int i = 0; i < n; i++)
    {

        if (ev[i] >= 1)
        {
            num_polof += ev[i];
        }
        else {
            if (num_polof > 0)
            {
                num_polof--;
            }
            else {
                num_crimes++;
            }
        }
    }
    return(num_crimes);
}
