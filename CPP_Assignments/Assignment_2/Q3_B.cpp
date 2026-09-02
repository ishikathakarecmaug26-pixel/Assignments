#include <iostream>
using namespace std;

namespace Physics
{
    double clamp(double val, double min, double max)
    {
        if (val < min)
            return min;

        if (val > max)
            return max;

        return val;
    }

    double lerp(double a, double b, double t)
    {
        return a + (b - a) * t;
    }
}

namespace GameMath
{
    int clamp(int val, int min, int max)
    {
        if (val < min)
            return min;

        if (val > max)
            return max;

        return val;
    }

    double lerp(double a, double b, double t)
    {
        return a + (b - a) * t;
    }
}

int main()
{
    double speed = Physics::clamp(120.5, 0.0, 100.0);
    cout << "Physics clamp: " << speed << endl;

    int health = GameMath::clamp(120, 0, 100);
    cout << "GameMath clamp: " << health << endl;

    double value1 = Physics::lerp(10.0, 20.0, 0.5);
    cout << "Physics lerp: " << value1 << endl;

    double value2 = GameMath::lerp(0.0, 100.0, 0.25);
    cout << "GameMath lerp: " << value2 << endl;

    // using namespace in limited scope
    {
        using namespace Physics;

        cout << "Using Physics namespace: "
             << clamp(150.0, 0.0, 100.0) << endl;
    }

    return 0;
}

