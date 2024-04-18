#include <iostream>
#include <string>

#include "hdrs/AVXPackedPointDistances.h"

using namespace ppdist;
using namespace ppdist::avx;

#define RUNVV(a) result = a(first, second); print_out(#a);
#define RUNPV(a) result = a({first[0], first[1]}, second); print_out(#a);

int main() {
    DPackedVector256 first;
    DPackedVector256 second;
    DPackedScalar128 result;

    auto read_in = [&first, &second] () {
        std::cout << "Input first pack(x1, y1, x2, y2):" << std::endl;
        for(auto& i : first)
            std::cin >> i;
        std::cout << "Input second pack(x1, y1, x2, y2):" << std::endl;
        for(auto& i : second)
            std::cin >> i;
    };

    auto print_out = [&result] (std::string out) {
        if(!out.empty())
            std::cout << out << std::endl;
        std::cout << "Resault:" << std::endl;
        for(const auto& i : result)
            std::cout << i << std::endl;
    };

    read_in();

    RUNVV(SquareDistancesBetwenSets);
    RUNVV(DistancesBetwenSets);
    RUNVV(DotProduct);
    RUNVV(CrossProduct);
    RUNPV(SquareDistancesToPoints);
    RUNPV(DistancesToPoints);
}