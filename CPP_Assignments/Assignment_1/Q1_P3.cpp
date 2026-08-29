#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double temp[3][3];

    // Read temperatures
    cout << "Enter temperatures for 3 floors and 3 rooms:\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "Floor " << i + 1 << ":\n";

        for (int j = 0; j < 3; j++)
        {
            cout << "Room " << j + 1 << ": ";
            cin >> temp[i][j];
        }
    }

    // Display table
    cout << "\n       Room1  Room2  Room3\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "Floor " << i + 1 << ": ";

        for (int j = 0; j < 3; j++)
        {
            cout << fixed << setprecision(1) << temp[i][j] << "   ";
        }

        cout << endl;
    }

    // Find hottest room
    double hottest = temp[0][0];
    int hottestFloor = 0;
    int hottestRoom = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (temp[i][j] > hottest)
            {
                hottest = temp[i][j];
                hottestFloor = i;
                hottestRoom = j;
            }
        }
    }

    cout << "\nHottest Room : Floor " << hottestFloor + 1
         << ", Room " << hottestRoom + 1
         << " -> " << hottest << "°C" << endl;

    // Find floor with highest average
    double highestAverage = 0;
    int hottestFloorNumber = 0;

    for (int i = 0; i < 3; i++)
    {
        double sum = 0;

        for (int j = 0; j < 3; j++)
        {
            sum += temp[i][j];
        }

        double average = sum / 3;

        if (average > highestAverage)
        {
            highestAverage = average;
            hottestFloorNumber = i;
        }
    }

    cout << "Hottest Floor : Floor " << hottestFloorNumber + 1
         << " (avg " << fixed << setprecision(2)
         << highestAverage << "°C)" << endl;

    // Count rooms at WARNING or above
    int warningRooms = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (temp[i][j] >= 30)
            {
                warningRooms++;
            }
        }
    }

    cout << "Rooms at WARNING or above : "
         << warningRooms << endl;

    return 0;
}