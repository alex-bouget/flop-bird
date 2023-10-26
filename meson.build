project('flop-bird', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3'])

sfml_dep = subproject('sfml').get_variable('sfml_dep')

exe = executable(
  'flop_bird',
  'flop_bird.cpp',
  dependencies : [sfml_dep],
  install : true
)

test('basic', exe)
