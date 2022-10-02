file(GLOB LIBDRIVERS_SOURCES ${PROJECT_SOURCE_DIR}/src/drivers/*.c)

add_library(
    drivers 
    STATIC
    ${LIBDRIVERS_SOURCES}
)

target_include_directories(
    drivers
    PUBLIC
    ${PROJECT_SOURCE_DIR}/src/drivers
)
