cxx_binary(
  name = 'test',
  header_namespace = 'test',
  headers = subdir_glob([
    ('include','**/*.h'),
  ]),
  srcs = glob([
    'src/*.cpp',
  ]),
  preprocessor_flags = ['-std=c++11'],
)
