//---------------------------------------------------------------------------//
// Copyright (c) 2021 Eleftherios Avramidis <el.avramidis@gmail.com>
//
// Distributed under The MIT License (MIT)
// See accompanying file LICENSE
//---------------------------------------------------------------------------//

#include <iostream>

#include "my_sort.hpp"
#include <benchmark/benchmark.h>

static void benchmark_bubble_sort(benchmark::State &state) {
    std::vector<unsigned int> unsorted_sequence = Utils::generate_random_sequence(100);

    for (auto _ : state) {
        std::vector<unsigned int> sorted_sequence = BubbleSort::sort(unsorted_sequence);
    }
}

BENCHMARK(benchmark_bubble_sort);

BENCHMARK_MAIN();