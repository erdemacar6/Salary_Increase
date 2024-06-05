#include <iostream>
#include "Workers.h"
#include <string>

using namespace std;

int main() {
    Workers workers;
    workers.showDepartment();
    cout << "" << endl;
    workers.enterInfos();
    workers.showInfos();
    workers.salaryIncrease();

    return 0;
}
