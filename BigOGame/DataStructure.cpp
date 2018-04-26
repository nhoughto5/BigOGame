#include "DataStructure.h"

DataStructure::DataStructure(std::string name, RunTime averageAccess, RunTime averageSearch, RunTime averageInsertion, RunTime averageDeletion, 
                             RunTime worstAccess, RunTime worstSearch, RunTime worstInsertion, RunTime worstDeletion, RunTime s):
    name(name),
    averageAccess(averageAccess), 
    averageSearch(averageSearch), 
    averageInsertion(averageInsertion), 
    averageDeletion(averageDeletion), 
    worstAccess(worstAccess), 
    worstSearch(worstSearch), 
    worstInsertion(worstInsertion),
    worstDeletion(worstDeletion),
    spaceComplexity(s)
{

}

DataStructure::~DataStructure() {}
