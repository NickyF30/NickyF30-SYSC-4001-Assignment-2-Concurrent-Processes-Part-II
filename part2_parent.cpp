//
// Created by nicky on 2025-11-06.
//

#include <iostream>
#include <unistd.h>
#include <sys/types.h>

using namespace std;

int main() {
    pid_t pid = fork();

    //PID is listed at top, open a new terminal and type "kill PID PID" for parent child

    if (pid < 0) {
        cerr << "Fork failed" << endl;
        return 1;
    }

    if (pid == 0) {
        //child process
        cout << "Child about to exec, PID: " << getpid() << endl;
        execl("./part2_child", "part2_child", nullptr);

        //fails to exec
        cerr << "Child execl failed" << endl;
        return 1;
    }
    else {
        //parent 1
        int counter = 0;
        int cycle = 0;
        cout << "Parent process PID: " << getpid() << ", Child PID: " << pid << endl;
        while (true) {
            if (counter % 3 == 0) {
                cout << "Cycle number: " << cycle << " - " << counter << " is a multiple of 3" << endl;
            }
            else {
                cout << "Cycle number:" << cycle << endl;
            }
            counter++;
            cycle++;
            sleep(1);
        }
    }
    return 0;
}