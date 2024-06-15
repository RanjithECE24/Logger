add_subdirectory(lib)

if (BUILD_DOC)
    add_subdirectory(doc)
endif()

if (BUILD_TESTS)
    add_subdirectory(test)
endif()