cc_library(
    name = "ppdefenitions",
    hdrs = [ "PackedDefenitions.h" ],
    deps = [
        "//utils/alignarray:tt_align_array"
    ],
    visibility = [ "//visibility:public" ]
)

cc_library(
    name = "avxppdist",
    hdrs = [ "AVXPackedPointDistances.h" ],
    deps = [
        "//hdrs:ppdefenitions"
    ],
    visibility = [ "//visibility:public" ]
)

cc_library(
    name = "ppdist",
    hdrs = [ "PackedPointDistances.h" ],
    deps = [
        "//hdrs:ppdefenitions"
    ],
    visibility = [ "//visibility:public" ]
)