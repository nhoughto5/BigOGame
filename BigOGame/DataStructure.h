#pragma once
#include <unordered_map>
#include <iostream>
#include "Constants.h"

class DataStructure
{
private:
    RunTime averageAccess, averageSearch, averageInsertion, averageDeletion;
    RunTime worstAccess, worstSearch, worstInsertion, worstDeletion;
    RunTime spaceComplexity;
    std::string name;
public:
    DataStructure() = default;
    DataStructure(std::string name, RunTime averageAccess, RunTime averageSearch, RunTime averageInsertion, RunTime averageDeletion, RunTime worstAccess, RunTime worstSearch, RunTime worstInsertion, RunTime worstDeletion, RunTime spaceComplexity);
    ~DataStructure();
};

