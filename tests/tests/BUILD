load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "AVX_ppdist_test",
    srcs = ["testAVX.cpp"],
    deps = [
        "//hdrs:avxppdist",
        "//utils/catch2:catch2",
    ],
    copts = [
        "-march=native",
        "-std=c++20"
    ]
)