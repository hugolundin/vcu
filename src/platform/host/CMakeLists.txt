file(GLOB HOST_SOURCES ${PROJECT_SOURCE_DIR}/src/platform/host/*.c)

add_executable(
    main
    ${HOST_SOURCES}
)

target_link_libraries(
    main
    shared
    drivers
)
