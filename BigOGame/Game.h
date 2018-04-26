#pragma once
#include <unordered_map>
#include <iostream>
#include "Algorithm.h"
#include "DataStructure.h"
#include "Constants.h"
#include "Factory.h"

class Game {
private:
    void init();

    std::unordered_map<AlgorithmEnum, Algorithm> mAlgorithms;
    std::unordered_map<DataStructureEnum, DataStructure> mDataStructures;
public:
    Game();
    ~Game();
    void start();
};

