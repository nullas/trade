workspace(name = "trade")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
  name = "gflags",
  strip_prefix = "gflags-2.2.2",
  urls = [
      "https://mirror.bazel.build/github.com/gflags/gflags/archive/v2.2.2.tar.gz",
      "https://github.com/gflags/gflags/archive/v2.2.2.tar.gz",
  ],
  sha256 = "34af2f15cf7367513b352bdcd2493ab14ce43692d2dcd9dfc499492966c64dcf",
)

http_archive(
  name = "glog",
  strip_prefix = "glog-0.4.0",
  urls = ["https://github.com/google/glog/archive/v0.4.0.zip"],
  sha256 = "9e1b54eb2782f53cd8af107ecf08d2ab64b8d0dc2b7f5594472f3bd63ca85cdc",
  repo_mapping = {"@com_github_gflags_gflags" : "@gflags"},
)
  