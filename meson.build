project('flop-bird', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3'])

sfml_dep = subproject('sfml').get_variable('sfml_dep')


includes_dep = declare_dependency(
  include_directories : include_directories('src/includes'),
  dependencies : [sfml_dep]
)

core_lib = static_library(
  'core',
  'src/core/engine.cpp',
  'src/core/event_manager.cpp',
  dependencies : [includes_dep, sfml_dep],
  include_directories : include_directories('src/core'),
)

core_dep = declare_dependency(
  include_directories : include_directories('src/core'),
  dependencies : [sfml_dep],
  link_with : [core_lib],
)

exe = executable(
  'flop_bird',
  'src/main.cpp',
  dependencies : [sfml_dep, core_dep],
  install : true,
)

test('basic', exe)
