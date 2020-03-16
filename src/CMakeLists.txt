set(SOURCES 
	main.cpp
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(travis_test ${SOURCES})

target_link_libraries(travis_test Qt5::Core)

