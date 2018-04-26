#include "Algorithm.h"

Algorithm::Algorithm(std::string name, RunTime b, RunTime a, RunTime w, RunTime s) :
    name(name), Best(b), Average(a), Worst(w), SpaceComplexity(s)
{

}

Algorithm::~Algorithm() {}

RunTime const Algorithm::getBest() {
    return Best;
}

RunTime const Algorithm::getAverage() {
    return Average;
}

RunTime const Algorithm::getWorst() {
    return Worst;
}
