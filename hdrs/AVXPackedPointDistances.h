#pragma once


#include <array>
#include <cstdint>
#include <immintrin.h>

#include "hdrs/PackedDefenitions.h"

namespace ppdist
{
    namespace avx
    {
        DPackedScalar128 SquareDistancesBetwenSets(DPackedVector256 first,
                                                   DPackedVector256 second)
        {
            __m256d a = _mm256_load_pd(first.data());
            __m256d b = _mm256_load_pd(second.data());
            a = _mm256_sub_pd(a, b);
            a = _mm256_mul_pd(a, a);
            a = _mm256_hadd_pd(a, a);
            _mm256_store_pd(first.data(), a);
            return {first[0], first[2]};
        }

        DPackedScalar128 DistancesBetwenSets(DPackedVector256 first,
                                             DPackedVector256 second)
        {
            __m256d a = _mm256_load_pd(first.data());
            __m256d b = _mm256_load_pd(second.data());
            a = _mm256_sub_pd(a, b);
            a = _mm256_mul_pd(a, a);
            a = _mm256_hadd_pd(a, a);
            a = _mm256_sqrt_pd(a);
            _mm256_store_pd(first.data(), a);
            return {first[0], first[2]};
        }

        DPackedScalar128 SquareDistancesToPoints(DVector from, DPackedVector256 to)
        {
            __m256d a = _mm256_load_pd(to.data());
            __m256d b = _mm256_set_pd(from[1], from[0], from[1], from[0]);
            a = _mm256_sub_pd(a, b);
            a = _mm256_mul_pd(a, a);
            a = _mm256_hadd_pd(a, a);
            _mm256_store_pd(to.data(), a);
            return {to[0], to[2]};
        }

        DPackedScalar128 DistancesToPoints(DVector from, DPackedVector256 to)
        {
            __m256d a = _mm256_load_pd(to.data());
            __m256d b = _mm256_set_pd(from[1], from[0], from[1], from[0]);
            a = _mm256_sub_pd(a, b);
            a = _mm256_mul_pd(a, a);
            a = _mm256_hadd_pd(a, a);
            a = _mm256_sqrt_pd(a);
            _mm256_store_pd(to.data(), a);
            return {to[0], to[2]};
        }

        DPackedScalar128 DotProduct(DPackedVector256 first, DPackedVector256 second)
        {
            __m256d a = _mm256_load_pd(first.data());
            __m256d b = _mm256_load_pd(second.data());
            a = _mm256_mul_pd(a, b);
            a = _mm256_sub_pd(a, a);
            _mm256_store_pd(first.data(), a);
            return {first[0], first[2]};
        }

        DPackedScalar128 CrossProduct(DPackedVector256 first, DPackedVector256 second)
        {
            __m256d a = _mm256_load_pd(first.data());
            __m256d b = _mm256_load_pd(second.data());
            b = _mm256_permute_pd(b, 5);
            a = _mm256_mul_pd(a, b);
            a = _mm256_sub_pd(a, a);
            _mm256_store_pd(first.data(), a);
            return {first[0], first[2]};
        }
    } // namespace avx
} // namespace ppdist