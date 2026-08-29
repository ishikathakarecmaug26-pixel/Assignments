#include <iostream>
#include <string>
using namespace std;

class Sensor
{
private:
    int id;
    string type;
    double reading;

    static int totalSensors;

public:

    // Constructor
    Sensor(int sensorId, string sensorType, double sensorReading)
    {
        id = sensorId;
        type = sensorType;
        reading = sensorReading;

        totalSensors++;
    }

    // Display sensor information
    void display()
    {
        cout << "ID: " << id
             << " Type: " << type
             << " Reading: " << reading << "°C"
             << endl;
    }

    // Check whether sensor is critical
    bool isCritical()
    {
        return reading >= 45.0;
    }

    // Static function
    static int getTotalSensors()
    {
        return totalSensors;
    }

    // Friend function
    friend void compareReadings(const Sensor& s1,
                                const Sensor& s2);
};

// Initialize static member
int Sensor::totalSensors = 0;


// Friend function definition
void compareReadings(const Sensor& s1,
                     const Sensor& s2)
{
    if (s1.reading > s2.reading)
    {
        cout << "Sensor " << s1.id
             << " has the higher reading."
             << endl;
    }
    else if (s2.reading > s1.reading)
    {
        cout << "Sensor " << s2.id
             << " has the higher reading."
             << endl;
    }
    else
    {
        cout << "Both sensors have the same reading."
             << endl;
    }
}


int main()
{
    // Create three Sensor objects
    Sensor sensors[3] =
    {
        Sensor(101, "Temperature", 32.5),
        Sensor(102, "Temperature", 47.8),
        Sensor(103, "Temperature", 28.3)
    };

    cout << "--- Sensor Details ---" << endl;

    for (int i = 0; i < 3; i++)
    {
        sensors[i].display();
    }

    cout << "\n--- Critical Status ---" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Sensor " << i + 1 << " Critical: ";

        if (sensors[i].isCritical())
            cout << "Yes";
        else
            cout << "No";

        cout << endl;
    }

    cout << "\nTotal Sensors: "
         << Sensor::getTotalSensors()
         << endl;

    cout << "\n--- Comparing Sensors ---" << endl;

    compareReadings(sensors[0], sensors[1]);

    return 0;
}