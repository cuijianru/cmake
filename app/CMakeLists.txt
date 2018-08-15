
cmake_minimum_required(VERSION 3.4.1)


set(SRC_DIR src/main/cpp/aaa)

#指定头文件所在，可以多次调用，指定多个路径
include_directories(src/main/cpp/aaa)

#添加自自定义的so库时，有两种方式，一种添加一个目录，一种一个个文件添加
#设定一个目录
aux_source_directory(src/main/cpp/aaa SRC_LIST)
add_library( imported-lib
             SHARED
             IMPORTED )
set_target_properties( # Specifies the target library.
                       imported-lib
                       # Specifies the parameter you want to define.
                       PROPERTIES IMPORTED_LOCATION
                       # Provides the path to the library you want to import.
                       libs/libimported-lib.so )
add_library( # Sets the name of the library.
             native-lib
             # Sets the library as a shared library.
             SHARED
             # Provides a relative path to your source file(s).
              #src/main/cpp/aaa/test.h src/main/cpp/aaa/test.cpp src/main/cpp/native-lib.cpp )各个文件顺序无关  上下两种方式都可以把文件加进来
              src/main/cpp/native-lib.cpp ${SRC_LIST} )
#target_link_libraries(native-lib  imported-lib)
#将前面目录下所有的文件都添加进去
# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
                       native-lib

                       # Links the target library to the log library
                       # included in the NDK.
                       log
                        )