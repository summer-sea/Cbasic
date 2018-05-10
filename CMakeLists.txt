cmake_minimum_required(VERSION 3.10)
project(Cbasic C)

set(CMAKE_C_STANDARD 99)

set(BUILD_1 main)
set(SOURCE_FILES_1 main.c)
#add_executable(${BUILD_1} ${SOURCE_FILES_1})

#set(BUILD_2  *)
#set(SOURCE_FILES_2 *.c)
#add_executable(${BUILD_2} ${SOURCE_FILES_2})

#FILE(GLOB_RECURSE SRC_FILES "*.c" "*.cc" "*.cpp" "*.h" "*.hpp")

FILE(GLOB_RECURSE SRC_FILES "*.c")
FOREACH(FILE_PATH ${SRC_FILES})
   MESSAGE(${FILE_PATH})
   STRING(REGEX REPLACE ".+/(.+)\\..*" "\\1" FILE_NAME ${FILE_PATH})
   STRING( REGEX REPLACE ".*/(.*)/.c$" "/1" prjName ${FILE_PATH} )
   MESSAGE(${FILE_NAME})
   set(BUILD_2 ${FILE_NAME})
   set(SOURCE_FILES_2 ${prjName})
   ADD_EXECUTABLE( ${BUILD_2} ${SOURCE_FILES_2})
ENDFOREACH(FILE_PATH)
#FILE(GLOB_RECURSE SRC_LIST "*.c")

#ADD_EXECUTABLE(hello ${SRC_LIST}) #在CMakeLists中，引用变量的方法为${变量名}
#FILE(GLOB_RECURSE SRC_LIST "*.c")
#FOREACH(src ${SRC_LIST})
#
#        MESSAGE( ${src} Finded)
#        STRING( REGEX REPLACE ".*/(.*)/.c$" "/1" prjName ${src} )
#        MESSAGE( ${prjName} Added)
#        ADD_EXECUTABLE( ${prjName} ${src} )
#ENDFOREACH(src)
# 查找当前目录下的所有源文件
# 并将名称保存到 SOURCE_FILES 变量
