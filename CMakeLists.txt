cmake_minimum_required(VERSION 3.10)
project(LAB6)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall")


include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(configlib STATIC 
    src/StringComparator.cpp
    src/CaseInsetitiveLess.cpp
    src/ComparatorBuilder.cpp
    src/CaseSensitiveLess.cpp
    src/LengthLess.cpp
    src/IgonrePrefixComparator.cpp
    src/CompositeComparator.cpp

)
add_executable(${PROJECT_NAME} src/main.cxx)
target_link_libraries(${PROJECT_NAME} PUBLIC configlib)