#pragma once

#include <stdexcept>

#include "hdrs/PackedDefenitions.h"

namespace ppdist
{
    namespace cpp
    {
        DPackedScalar128 SquareDistancesBetwenSets(DPackedVector256 first, DPackedVector256 second)
        {
            // res[i] = dist[first[2i:2i+1], second[2i:2i+1]] ^ 2
            throw std::runtime_error("Unimplemented");
        }

        DPackedScalar128 DistancesBetwenSets(DPackedVector256 first, DPackedVector256 second)
        {
            // res[i] = dist[first[2i:2i+1], second[2i:2i+1]]
            throw std::runtime_error("Unimplemented");
        }

        DPackedScalar128 SquareDistancesToPoints(DVector from, DPackedVector256 to)
        {
            // res[i] = dist[from, to[2i:2i+1]] ^ 2
            throw std::runtime_error("Unimplemented");
        }

        DPackedScalar128 DistancesToPoints(DVector from, DPackedVector256 to)
        {
            // res[i] = dist[from, to[2i:2i+1]]
            throw std::runtime_error("Unimplemented");
        }

        DPackedScalar128 DotProduct(DPackedVector256 first, DPackedVector256 second)
        {
            // res[i] = dot[first[2i:2i+1], second[2i:2i+1]]
            throw std::runtime_error("Unimplemented");
        }

        DPackedScalar128 CrossProduct(DPackedVector256 first, DPackedVector256 second)
        {
            // res[i] = cross[first[2i:2i+1], second[2i:2i+1]]
            throw std::runtime_error("Unimplemented");
        }
    }
}
