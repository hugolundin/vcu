file(GLOB LIBVCU_SOURCES ${PROJECT_SOURCE_DIR}/src/vcu/*.c)

add_library(
    libvcu 
    STATIC
    ${LIBVCU_SOURCES}
)

target_include_directories(libvcu PUBLIC ${PROJECT_SOURCE_DIR}/src/vcu)
message(STATUS ${PROJECT_SOURCE_DIR})