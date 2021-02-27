//---------------------------------------------------------------------------//
// Copyright (c) 2021 Eleftherios Avramidis <el.avramidis@gmail.com>
//
// Distributed under The MIT License (MIT)
// See accompanying file LICENSE
//---------------------------------------------------------------------------//

#ifndef MYSORT_SEQUENCE_GENERATION_HPP
#define MYSORT_SEQUENCE_GENERATION_HPP

#include <vector>
#include <random>
#include <algorithm>

class Utils {
public:
    [[nodiscard]] static std::vector<unsigned int> generate_random_sequence(unsigned int size) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<unsigned int> distrib(0, size - 1);

        std::vector<unsigned int> random_sequence(size);

        for (auto &v : random_sequence) {
            v = distrib(gen);
        }

        return random_sequence;
    }
};


#endif // MYSORT_SEQUENCE_GENERATION_HPP
