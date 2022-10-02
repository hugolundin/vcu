file(GLOB LIBSHARED_SOURCES ${PROJECT_SOURCE_DIR}/src/shared/*.c)

add_library(
    shared 
    STATIC
    ${LIBSHARED_SOURCES}
)

target_include_directories(
    shared
    PUBLIC
    ${PROJECT_SOURCE_DIR}/src/shared
)
