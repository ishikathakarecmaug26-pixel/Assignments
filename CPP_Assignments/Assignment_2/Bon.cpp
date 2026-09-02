#include <iostream>
using namespace std;

// Global variable
int level = 1;

namespace Engine
{
    namespace Audio
    {
        void playSound(string name)
        {
            cout << "Playing: " << name << endl;
        }
    }
}

int main()
{
    // Local variable
    int level = 10;

    cout << "Local level: " << level << endl;

    cout << "Global level: " << ::level << endl;

    Engine::Audio::playSound("sword_clash");

    return 0;
}
