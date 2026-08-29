#include <iostream>
using namespace std;

int main()
{
    int N;
    double arr[100];

    cout << "Enter number of readings: ";
    cin >> N;

    // Read N readings
    for (int i = 0; i < N; i++)
    {
        cout << "Enter reading " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Print readings >= 45 and count them
    int count = 0;

    cout << "Readings >= 45:" << endl;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] >= 45)
        {
            cout << arr[i] << endl;
            count++;
        }
    }

    cout << "Count: " << count << endl;


    // Calculate average
    double sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum = sum + arr[i];
    }

    double average = sum / N;

    cout << "Average: " << average << endl;


    // Find minimum and maximum
    double minimum = arr[0];
    double maximum = arr[0];

    for (int i = 1; i < N; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }

        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    cout << "Minimum: " << minimum << endl;
    cout << "Maximum: " << maximum << endl;

    return 0;
}