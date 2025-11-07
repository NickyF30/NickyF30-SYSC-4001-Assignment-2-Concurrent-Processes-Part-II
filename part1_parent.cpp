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
        //child
        int counter = 0;
        cout << "Child process PID: " << getpid() << endl;
        while (true) {
            cout << "Child counter: " << counter << endl;
            counter++;
            sleep(1);
        }
    }
    else {
        //parent
        int counter = 0;
        cout << "Parent process PID: " << getpid() << ", Child PID: " << pid << endl;
        while (true) {
            cout << "Parent counter: " << counter << endl;
            counter++;
            sleep(1);
        }
    }
}
