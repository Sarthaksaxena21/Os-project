#include <vector>
#include "scheduler.h"
#include "fcfs.h"

int main() {

    std::vector<Process> processes = {
        Process(1, 5, 0),
        Process(2, 3, 1),
        Process(3, 8, 2),
        Process(4, 6, 3)
    };

    runEECSA(processes);
    runFCFS(processes);

    return 0;
}
