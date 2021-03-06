#pragma once
#include <string>
#include <iostream>
#include "Constants.h"
class Algorithm {
private:
    RunTime Best, Average, Worst, SpaceComplexity;
    std::string name;
public:
    Algorithm() = default;
    Algorithm(std::string name, RunTime b, RunTime a, RunTime w, RunTime s);
    ~Algorithm();

    RunTime const getBest();
    RunTime const getAverage();
    RunTime const getWorst();
};

