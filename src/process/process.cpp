#include <iostream>
#include "process.h"
#include <Eigen/Dense>
using Eigen::MatrixXd;

void Process::planProcess()
{
    std::cout << "This is planning process." << std::endl;
    my_map.mapInfo();

    MatrixXd m(2, 2);
    m(0, 0) = 3;
    m(1, 0) = 5;
    m(0, 1) = -1;
    m(1, 1) = 4;
    std::cout << m << std::endl;
    std::cout << "planning success." << std::endl;
}