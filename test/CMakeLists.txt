set(TARGET ara_log_unit_test)

include(FetchContent)

# Fetching GoogleTest 1.12.1 for unit testing
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/58d77fa8070e8cec2dc1ed015d66b454c8d78850.zip
)

FetchContent_MakeAvailable(googletest)

add_executable(${TARGET})

target_sources(${TARGET} PUBLIC    "${CMAKE_CURRENT_SOURCE_DIR}/unit/argument_test.cpp"
                                    "${CMAKE_CURRENT_SOURCE_DIR}/unit/logger_test.cpp"
                                    #"${CMAKE_CURRENT_SOURCE_DIR}/unit/logging_framework_test.cpp"
                                    "${CMAKE_CURRENT_SOURCE_DIR}/unit/log_stream_test.cpp"
                                    "${CMAKE_CURRENT_SOURCE_DIR}/unit/main.cpp")

target_link_libraries(${TARGET} PUBLIC ara_log gtest_main)