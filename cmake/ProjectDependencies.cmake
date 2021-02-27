#---------------------------------------------------------------------------//
# Copyright (c) 2021 Eleftherios Avramidis <el.avramidis~gmail.com>
#
# Distributed under The MIT License (MIT)
# See accompanying file LICENSE
#---------------------------------------------------------------------------//

include(FetchContent)
FetchContent_Declare(Chronos
        GIT_REPOSITORY https://github.com/avramidis/chronos.git
        GIT_TAG origin/master)
FetchContent_MakeAvailable(Chronos)

FetchContent_Declare(benchmark
        GIT_REPOSITORY https://github.com/google/benchmark
        GIT_TAG v1.5.2)
set(BENCHMARK_ENABLE_TESTING OFF)
FetchContent_MakeAvailable(benchmark)