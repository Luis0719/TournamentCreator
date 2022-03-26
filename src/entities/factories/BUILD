cc_library(
    name = "contestant_factory",
    srcs = ["contestant_factory.cc"],
    hdrs = ["contestant_factory.h"],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
        "//src:flags",
        "//src/entities:contestant",
        "//src/entities/creators:contestant_creator",
        "//src/entities/creators:players_creator",
        "//src/entities/creators:teams_creator",
        "@com_github_google_glog//:glog",
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/memory",
    ],
)
