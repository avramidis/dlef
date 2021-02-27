//---------------------------------------------------------------------------//
// Copyright (c) 2021 Eleftherios Avramidis <el.avramidis@gmail.com>
//
// Distributed under The MIT License (MIT)
// See accompanying file LICENSE
//---------------------------------------------------------------------------//

#ifndef MYSORT_BUBBLE_SORT_CPP
#define MYSORT_BUBBLE_SORT_CPP

#include "bubble_sort.hpp"

#include <algorithm>
#include <vector>

[[nodiscard]] std::vector<unsigned int>
BubbleSort::sort(const std::vector<unsigned int> &unsorted_sequence) {
    std::vector<unsigned int> sorted_sequence(unsorted_sequence);

    bool changed = false;
    do {
        auto it =
            std::ranges::adjacent_find(sorted_sequence, std::ranges::greater());
        if (it != sorted_sequence.end()) {
            std::swap(sorted_sequence[static_cast<unsigned long>(
                          std::distance(sorted_sequence.begin(), it))],
                      sorted_sequence[static_cast<unsigned long>(
                          std::distance(sorted_sequence.begin(), it++))]);
            changed = true;
        } else {
            changed = false;
        }
    } while (changed);

    return sorted_sequence;
}

#endif // MYSORT_BUBBLE_SORT_CPP
