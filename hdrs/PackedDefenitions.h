#pragma once

#include <cstdint>
#include <array>

#include "utils/alignarray/array.h"

namespace ppdist {
    using DPackedVector256 = tt::collections::generic::align_array<double, 4, 256>;
    using DPackedScalar256 = tt::collections::generic::align_array<double, 4, 256>;
    using DPackedScalar128 = tt::collections::generic::align_array<double, 2, 128>;
    using DVector = tt::collections::generic::align_array<double, 2, 128>;
    using DScalar = double;
}