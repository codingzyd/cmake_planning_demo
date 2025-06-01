#include <iostream>
#include "process.h"
#include "showresult.h"

int main()
{
    std::cout << "planning start." << std::endl;
    Process proc;
    proc.planProcess();
    std::cout << "planning end." << std::endl;
    std::cout << "planning success!" << std::endl;
    std::cout << "show result: " << std::endl;
    ShowResult show;
    show.drawResult();
    return 0;
}