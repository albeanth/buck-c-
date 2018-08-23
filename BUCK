cxx_binary(
  name = 'test',              # build rule name (unique to this file)
  srcs = [ 'MainTest.cpp'],
  deps = [':TWIGL'],          # each of these are build targets
  preprocessor_flags = ['-std=c++11','-Wc++11-extensions'],
)

cxx_library(
  name = 'TWIGL',
  header_namespace = 'TWIGL',
  exported_headers = {'ClassTest.hpp' : 'include/ClassTest.hpp'}, # // indicates path is relative to root of project
  srcs = ['src/ClassTest.cpp' ],
  #visibility = ['//:test'],
)
