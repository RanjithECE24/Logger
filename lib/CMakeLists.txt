set(TARGET ara_log)

add_library(${TARGET})

target_sources(${TARGET} PUBLIC    "${CMAKE_CURRENT_SOURCE_DIR}/src/ara/log/sink/log_sink.cpp"
                                    "${CMAKE_CURRENT_SOURCE_DIR}/src/ara/log/sink/console_log_sink.cpp"
                                    "${CMAKE_CURRENT_SOURCE_DIR}/src/ara/log/sink/file_log_sink.cpp"
                                    "${CMAKE_CURRENT_SOURCE_DIR}/src/ara/log/logger.cpp"
                                    "${CMAKE_CURRENT_SOURCE_DIR}/src/ara/log/log_stream.cpp"
                                    "${CMAKE_CURRENT_SOURCE_DIR}/src/ara/log/logging_framework.cpp"
                                    "${CMAKE_CURRENT_SOURCE_DIR}/src/ara/core/error_code.cpp"
                                    "${CMAKE_CURRENT_SOURCE_DIR}/src/ara/core/instance_specifier.cpp")

target_include_directories(${TARGET} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")