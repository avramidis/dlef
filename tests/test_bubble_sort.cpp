//---------------------------------------------------------------------------//
// Copyright (c) 2021 Eleftherios Avramidis <el.avramidis@gmail.com>
//
// Distributed under The MIT License (MIT)
// See accompanying file LICENSE
//---------------------------------------------------------------------------//

#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "my_sort.hpp"

TEST_CASE("Test bubble sort") {
    SECTION("Sort a vector") {
        std::vector<unsigned int> unsorted_sequence =
            Utils::generate_random_sequence(100);

        std::vector<unsigned int> sorted_sequence =
            BubbleSort::sort(unsorted_sequence);

        bool sorted = false;
        auto it =
            std::ranges::adjacent_find(sorted_sequence, std::ranges::greater());
        if (it == sorted_sequence.end()) {
            sorted = true;
        } else {
            sorted = false;
        }

        REQUIRE(sorted);
    }
}