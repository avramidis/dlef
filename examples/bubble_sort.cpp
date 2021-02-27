//---------------------------------------------------------------------------//
// Copyright (c) 2021 Eleftherios Avramidis <el.avramidis@gmail.com>
//
// Distributed under The MIT License (MIT)
// See accompanying file LICENSE
//---------------------------------------------------------------------------//

#include "my_sort.hpp"
#include "sequence_generation.hpp"
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::cout << "Generating random sequence...";
    std::vector<unsigned int> unsorted_sequence =
        Utils::generate_random_sequence(10);
    std::cout << "done!" << std::endl;

    std::cout << "Random sequence" << std::endl;
    for (const auto v : unsorted_sequence) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    std::cout << "Sorting random sequence...";
    std::vector<unsigned int> sorted_sequence =
        BubbleSort::sort(unsorted_sequence);
    std::cout << "done!" << std::endl;

    std::cout << "Sorted sequence" << std::endl;
    for (const auto v : sorted_sequence) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    return 0;
}
