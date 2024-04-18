#pragma once

#include <stdexcept>

#include "hdrs/PackedDefenitions.h"

namespace ppdist
{
    namespace cpp
    {
        DPackedScalar128 SquareDistancesBetwenSets(DPackedVector256 first, DPackedVector256 second)
        {
            // res[i] = dist[first[i], second[i]] ^ 2
            throw std::runtime_error("Unimplemented");
        }

        DPackedScalar128 DistancesBetwenSets(DPackedVector256 first, DPackedVector256 second)
        {
            // res[i] = dist[first[i], second[i]]
            throw std::runtime_error("Unimplemented");
        }

        DPackedScalar128 SquareDistancesToPoints(DVector from, DPackedVector256 to)
        {
            // res[i] = dist[from, to[i]] ^ 2
            throw std::runtime_error("Unimplemented");
        }

        DPackedScalar128 DistancesToPoints(DVector from, DPackedVector256 to)
        {
            // res[i] = dist[from, to[i]]
            throw std::runtime_error("Unimplemented");
        }

        DPackedScalar128 DotProduct(DPackedVector256 first, DPackedVector256 second)
        {
            // res[i] = dot[first[i], second[i]]
            throw std::runtime_error("Unimplemented");
        }

        DPackedScalar128 CrossProduct(DPackedVector256 first, DPackedVector256 second)
        {
            // res[i] = cross[first[i], second[i]]
            throw std::runtime_error("Unimplemented");
        }
    }
}