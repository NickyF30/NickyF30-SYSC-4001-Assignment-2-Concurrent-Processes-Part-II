//
// Created by nicky on 2025-11-06.
// to run

// compile
// g++ part2_parent.cpp -o part2_parent
// g++ part2_child.cpp -o part2_child

// run ONLY parent
//./part2_parent
//

#include <iostream>
#include <unistd.h>
#include <sys/types.h>

using namespace std;

int main() {
    int counter = 0;
    int cycle = 0;
    cout << "Child process PID: " << getpid() << " started" << endl;

    while (true) {
        if (counter % 3 == 0) {
            cout << "Cycle number: " << cycle << " - " << counter << " is a multiple of 3" << endl;
        } else {
            cout << "Cycle number: " << cycle << endl;
        }
        counter--;  //decrement
        cycle++;
        sleep(1);
    }

    return 0;
}