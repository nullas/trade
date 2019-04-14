package(default_visibility = ["//visibility:public"])

cc_library(
    name = "md",
    srcs = ["md.cc"],
    hdrs = ["md.h"],
    deps = [
        "//trade_api:md_user_api",
        "@glog",
    ],
)

cc_binary(
    name = "md_main",
    srcs = ["md_main.cc"],
    deps = [
        ":md",
        "@glog",
    ],
)
