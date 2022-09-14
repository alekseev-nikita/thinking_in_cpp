project(namespaces)

set(SOURCES main.cpp func.cpp)

set(HEADERS func.h)

add_executable(main ${SOURCES} ${HEADERS})
