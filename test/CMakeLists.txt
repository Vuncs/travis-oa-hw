include(DownloadProject.cmake)
download_project(PROJ                googletest
                 GIT_REPOSITORY      https://github.com/google/googletest.git
                 GIT_TAG             master
                 ${UPDATE_DISCONNECTED_IF_AVAILABLE}
)

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})

set(TST_SOURCES 
	tests.cpp
)

add_executable(tests ${TST_SOURCES})

target_link_libraries(tests gtest gmock_main)

