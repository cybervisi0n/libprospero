libcrt_srcs = files(
    '_start.c',
    'crt.c'
)


libcrt = library('crt',
    include_directories: libprospero_includes,
    pic: true,
    sources: [libcrt_srcs],
    native: true
)

libprospero_libs += libcrt
