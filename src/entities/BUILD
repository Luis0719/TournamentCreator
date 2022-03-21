cc_library(
  name = "contestant",
  hdrs = ["contestant.h"],
  visibility = [
    "//src:__subpackages__"
  ],
)

cc_library(
  name = "player",
  deps = [
    ":contestant",
  ],
  srcs = ["player.cc"],
  hdrs = ["player.h"],
  visibility = [
    "//src:__subpackages__",
  ],
)

cc_library(
  name = "team",
  deps = [
    ":contestant",
  ],
  srcs = ["team.cc"],
  hdrs = ["team.h"],
  visibility = [
    "//src:__subpackages__",
  ],
)