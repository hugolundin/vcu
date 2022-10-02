if (${TARGET} MATCHES "zephyr")
    target_sources(
        app
        PRIVATE
        main.c
    )

    target_link_libraries(
        app
        PUBLIC
        libvcu
    )
endif()
