libc_srcs = files(
    '__xuname.c'
)


libc = library('c',
    include_directories: libprospero_includes,
    pic: true,
    sources: [libc_srcs],
    native: true
)

libprospero_libs += libc