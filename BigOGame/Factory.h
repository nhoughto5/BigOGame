#pragma once
#include <string>
#include <unordered_map>
#include "Constants.h"
#include "DataStructure.h"
#include "Algorithm.h"
std::unordered_map<DataStructuresEnum, DataStructure> populateDS() {
    std::unordered_map<DataStructuresEnum, DataStructure> ret;
    ret[DataStructuresEnum::Array] = DataStructure("Array", RunTime::Constant, RunTime::N, RunTime::N, RunTime::N, RunTime::Constant, RunTime::N, RunTime::N, RunTime::N, RunTime::N);
    ret[DataStructuresEnum::Stack] = DataStructure("Stack", RunTime::N, RunTime::N, RunTime::Constant, RunTime::Constant, RunTime::N, RunTime::N, RunTime::Constant, RunTime::Constant, RunTime::N);
    ret[DataStructuresEnum::Queue] = DataStructure("Queue", RunTime::N, RunTime::N, RunTime::Constant, RunTime::Constant, RunTime::N, RunTime::N, RunTime::Constant, RunTime::Constant, RunTime::N);
    ret[DataStructuresEnum::SinglyLinkedList] = DataStructure("Singly Linked List", RunTime::N, RunTime::N, RunTime::Constant, RunTime::Constant, RunTime::N, RunTime::N, RunTime::Constant, RunTime::Constant, RunTime::N);
    ret[DataStructuresEnum::DoublyLinkedList] = DataStructure("Doubly Linked List", RunTime::N, RunTime::N, RunTime::Constant, RunTime::Constant, RunTime::N, RunTime::N, RunTime::Constant, RunTime::Constant, RunTime::N);
    ret[DataStructuresEnum::SkipList] = DataStructure("Skip List", RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::N, RunTime::N, RunTime::N, RunTime::N, RunTime::nLogN);
    ret[DataStructuresEnum::HashTable] = DataStructure("Hash Table", RunTime::NA, RunTime::Constant, RunTime::Constant, RunTime::Constant, RunTime::NA, RunTime::N, RunTime::N, RunTime::N, RunTime::N);
    ret[DataStructuresEnum::BinarySearchTree] = DataStructure("Binary Search Tree", RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::N, RunTime::N, RunTime::N, RunTime::N, RunTime::N);
    ret[DataStructuresEnum::CartesianTree] = DataStructure("Cartesian Tree", RunTime::NA, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::NA, RunTime::N, RunTime::N, RunTime::N, RunTime::N);
    ret[DataStructuresEnum::BTree] = DataStructure("B - Tree", RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::N);
    ret[DataStructuresEnum::RedBlackTree] = DataStructure("Red - Black Tree", RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::N);
    ret[DataStructuresEnum::SplayTree] = DataStructure("Splay Tree", RunTime::NA, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::NA, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::N);
    ret[DataStructuresEnum::AVLTree] = DataStructure("AVL Tree", RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::N);
    ret[DataStructuresEnum::KDTree] = DataStructure("KD Tree", RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::LogN, RunTime::N, RunTime::N, RunTime::N, RunTime::N, RunTime::N);
    return ret;
}

std::unordered_map <AlgorithmsEnum, Algorithm> populateAlgorithm() {
    std::unordered_map <AlgorithmsEnum, Algorithm> ret;
    ret[AlgorithmsEnum::Quicksort] = Algorithm("Quicksort", RunTime::nLogN, RunTime::nLogN, RunTime::nSquared, RunTime::LogN);
    ret[AlgorithmsEnum::Mergesort] = Algorithm("Mergesort", RunTime::nLogN, RunTime::nLogN, RunTime::nLogN, RunTime::N);
    ret[AlgorithmsEnum::Timsort] = Algorithm("Timsort", RunTime::N, RunTime::nLogN, RunTime::nLogN, RunTime::N);
    ret[AlgorithmsEnum::Heapsort] = Algorithm("Heapsort", RunTime::nLogN, RunTime::nLogN, RunTime::nLogN, RunTime::Constant);
    ret[AlgorithmsEnum::BubbleSort] = Algorithm("Bubble Sort", RunTime::N, RunTime::nSquared, RunTime::nSquared, RunTime::Constant);
    ret[AlgorithmsEnum::InsertionSort] = Algorithm("Insertion Sort", RunTime::N, RunTime::nSquared, RunTime::nSquared, RunTime::Constant);
    ret[AlgorithmsEnum::SelectionSort] = Algorithm("Selection Sort", RunTime::nSquared, RunTime::nSquared, RunTime::nSquared, RunTime::Constant);
    ret[AlgorithmsEnum::TreeSort] = Algorithm("Tree Sort", RunTime::nLogN, RunTime::nLogN, RunTime::nSquared, RunTime::N);
    ret[AlgorithmsEnum::ShellSort] = Algorithm("Shell Sort", RunTime::nLogN, RunTime::NLogNSquared, RunTime::NLogNSquared, RunTime::Constant);
    ret[AlgorithmsEnum::BucketSort] = Algorithm("Bucket Sort", RunTime::NPlusK, RunTime::NPlusK, RunTime::nSquared, RunTime::N);
    ret[AlgorithmsEnum::RadixSort] = Algorithm("Radix Sort", RunTime::NK, RunTime::NK, RunTime::NK, RunTime::NPlusK);
    ret[AlgorithmsEnum::CountingSort] = Algorithm("Counting Sort", RunTime::NPlusK, RunTime::NPlusK, RunTime::NPlusK, RunTime::K);
    ret[AlgorithmsEnum::Cubesort] = Algorithm("Cubesort", RunTime::N, RunTime::nLogN, RunTime::nLogN, RunTime::N);
    return ret;
}