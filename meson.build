project('libprospero', 'c', 'cpp',
    default_options: {
        'default_library': 'static',
        'prefer_static':    false
    },
    meson_version: '>=1.2.0',
    version: '1.0'
)

fs = import('fs')

libprospero_global_shared_args = [
    '-march=znver2'
]

libprospero_includes = include_directories(
    'include',
    'include/freebsd',
    'include/khronos'
)

libprospero_libs = []

subdir('libc')

libprospero_dep = declare_dependency(
    compile_args: libprospero_global_shared_args,
    include_directories: libprospero_includes,
    link_with: libprospero_libs,
)