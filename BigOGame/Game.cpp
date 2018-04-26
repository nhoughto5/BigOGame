#include "Game.h"
Game::Game() {}
Game::~Game() {}

void Game::start() {
    std::cout << "Welcome to the DataStructures and Algorithms Game\n";
    std::cout << "\t.\t.\n";
    std::cout << "\t.\t.\n";
    std::cout << "\t.\t.\n";
    std::cout << "\t.\t.\n";
    init();
}

void Game::init() {
    mAlgorithms = populateAlgorithm();
    mDataStructures = populateDS();
}