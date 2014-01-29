#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    cout << "Random number: " << rand() << endl;

    return 0;
}
