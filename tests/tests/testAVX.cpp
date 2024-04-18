#include <algorithm>
#include <catch2/catch_test_macros.hpp>
#include <iostream>
#include <random>
#include <vector>
#include "hdrs/AVXPackedPointDistances.h"
#include "utils/alignarray/array.h"

using namespace ppdist;
using namespace ppdist::avx;

constexpr const double DB_COMP = 0.01;

#define DEQ(a,b) ((a - b > DB_COMP) || (a - b < -DB_COMP))

template<size_t _sz>
inline bool operator==(std::array<double, _sz>&& a, std::array<double, _sz>&& b) {
    for(int i = 0; i < _sz; i++) if(!DEQ(a[i], b[i])) return false;
    return true;
}

TEST_CASE("DistanceBetwenSets") {
    REQUIRE(SquareDistancesBetwenSets({ 1, 0, 2, 1 }, { 0, 0, 1, 1 }) == DPackedScalar128{1., 1.});
    REQUIRE(SquareDistancesBetwenSets({ 0, 0, 0, 0 }, { 0, 0, 1, 2 }) == DPackedScalar128{0., 5});
}