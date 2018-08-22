cxx_binary(
  name = 'test',
  srcs = ['MainTest.cpp'],
  deps = [':ClassTest'],
  preprocessor_flags = ['-std=c++11','-Wc++11-extensions'],
)

cxx_library(
  name = 'ClassTest',
  srcs = ['ClassTest.cpp'],
  headers = ['ClassTest.hpp'],
)
