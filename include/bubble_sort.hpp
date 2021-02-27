//---------------------------------------------------------------------------//
// Copyright (c) 2021 Eleftherios Avramidis <el.avramidis~gmail.com>
//
// Distributed under The MIT License (MIT)
// See accompanying file LICENSE
//---------------------------------------------------------------------------//

#ifndef MYSORT_BUBBLE_SORT_HPP
#define MYSORT_BUBBLE_SORT_HPP

#include <vector>
class BubbleSort {
  public:
    [[nodiscard]] static std::vector<unsigned int>
    sort(const std::vector<unsigned int> &unsorted_sequence);
};
#endif // MYSORT_BUBBLE_SORT_HPP
