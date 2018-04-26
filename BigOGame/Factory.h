#pragma once
#include <string>
#include <unordered_map>
#include "Constants.h"
#include "DataStructure.h"
#include "Algorithm.h"
std::unordered_map<DataStructureEnum, DataStructure> populateDS();

std::unordered_map <AlgorithmEnum, Algorithm> populateAlgorithm();