#include "Factory.h"

std::unordered_map<DataStructureEnum, DataStructure> populateDS() {
    std::unordered_map<DataStructureEnum, DataStructure> ret;
    ret[DataStructureEnum::Array] = DataStructure("Array", RunTime::Constant, RunTime::N, RunTime::N, RunTime::N, RunTime::Constant, RunTime::N, RunTime::N, RunTime::N, RunTime::N);
    ret[DataStructureEnum::Stack] = DataStructure("Stack", RunTime::N, RunTime::N, RunTime::Constant, RunTime::Constant, RunTime::N, RunTime::N, RunTime::Constant, RunTime::Constant, RunTime::N);
    ret[DataStructureEnum::Queue] = DataStructure("Queue", RunTime::N, RunTime::N, RunTime::Constant, RunTime::Constant, RunTime::N, RunTime::N, RunTime::Constant, RunTime::Constant, RunTime::N);
    ret[DataStructureEnum::SinglyLinkedList] = DataStructure("Singly Linked List", RunTime::N, RunTime::N, RunTime::Constant, RunTime::Constant, RunTime::N, RunTime::N, RunTime::Constant, RunTime::Constant, RunTime::N);
    ret[DataStructureEnum::DoublyLinkedList] = DataStructure("Doubly Linked List", RunTime::N, RunTime::N, RunTime::Constant, RunTime::Constant, RunTime::N, RunTime::N, RunTime::Constant, RunTime::Constant, RunTime::N);
    ret[DataStructureEnum::SkipList] = DataStructure("Skip List", RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::N, RunTime::N, RunTime::N, RunTime::N, RunTime::nLogN);
    ret[DataStructureEnum::HashTable] = DataStructure("Hash Table", RunTime::NA, RunTime::Constant, RunTime::Constant, RunTime::Constant, RunTime::NA, RunTime::N, RunTime::N, RunTime::N, RunTime::N);
    ret[DataStructureEnum::BinarySearchTree] = DataStructure("Binary Search Tree", RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::N, RunTime::N, RunTime::N, RunTime::N, RunTime::N);
    ret[DataStructureEnum::CartesianTree] = DataStructure("Cartesian Tree", RunTime::NA, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::NA, RunTime::N, RunTime::N, RunTime::N, RunTime::N);
    ret[DataStructureEnum::BTree] = DataStructure("B - Tree", RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::N);
    ret[DataStructureEnum::RedBlackTree] = DataStructure("Red - Black Tree", RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::N);
    ret[DataStructureEnum::SplayTree] = DataStructure("Splay Tree", RunTime::NA, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::NA, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::N);
    ret[DataStructureEnum::AVLTree] = DataStructure("AVL Tree", RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::N);
    ret[DataStructureEnum::KDTree] = DataStructure("KD Tree", RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::N, RunTime::N, RunTime::N, RunTime::N, RunTime::N);
    return ret;
}

std::unordered_map <AlgorithmEnum, Algorithm> populateAlgorithm() {
    std::unordered_map <AlgorithmEnum, Algorithm> ret;
    ret[AlgorithmEnum::Quicksort] = Algorithm("Quicksort", RunTime::nLogN, RunTime::nLogN, RunTime::nSquared, RunTime::LogN);
    ret[AlgorithmEnum::Mergesort] = Algorithm("Mergesort", RunTime::nLogN, RunTime::nLogN, RunTime::nLogN, RunTime::N);
    ret[AlgorithmEnum::Timsort] = Algorithm("Timsort", RunTime::N, RunTime::nLogN, RunTime::nLogN, RunTime::N);
    ret[AlgorithmEnum::Heapsort] = Algorithm("Heapsort", RunTime::nLogN, RunTime::nLogN, RunTime::nLogN, RunTime::Constant);
    ret[AlgorithmEnum::BubbleSort] = Algorithm("Bubble Sort", RunTime::N, RunTime::nSquared, RunTime::nSquared, RunTime::Constant);
    ret[AlgorithmEnum::InsertionSort] = Algorithm("Insertion Sort", RunTime::N, RunTime::nSquared, RunTime::nSquared, RunTime::Constant);
    ret[AlgorithmEnum::SelectionSort] = Algorithm("Selection Sort", RunTime::nSquared, RunTime::nSquared, RunTime::nSquared, RunTime::Constant);
    ret[AlgorithmEnum::TreeSort] = Algorithm("Tree Sort", RunTime::nLogN, RunTime::nLogN, RunTime::nSquared, RunTime::N);
    ret[AlgorithmEnum::ShellSort] = Algorithm("Shell Sort", RunTime::nLogN, RunTime::NLogNSquared, RunTime::NLogNSquared, RunTime::Constant);
    ret[AlgorithmEnum::BucketSort] = Algorithm("Bucket Sort", RunTime::NPlusK, RunTime::NPlusK, RunTime::nSquared, RunTime::N);
    ret[AlgorithmEnum::RadixSort] = Algorithm("Radix Sort", RunTime::NK, RunTime::NK, RunTime::NK, RunTime::NPlusK);
    ret[AlgorithmEnum::CountingSort] = Algorithm("Counting Sort", RunTime::NPlusK, RunTime::NPlusK, RunTime::NPlusK, RunTime::K);
    ret[AlgorithmEnum::Cubesort] = Algorithm("Cubesort", RunTime::N, RunTime::nLogN, RunTime::nLogN, RunTime::N);
    return ret;
}