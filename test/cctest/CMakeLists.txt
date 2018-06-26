cmake_minimum_required(VERSION 3.0)

project(cmake_test)

# Prepare "Catch" library for other executables

set(CATCH_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/. ${PROJECT_SRC_DIR}/src/ )
set(SOURCE_PROJECT_INCLUDE_DIR ${INLCUDE_HEADERS}  ${PROJECT_SRC_LST} )

#message ("Debug message --- " ${INLCUDE_HEADERS})

add_library(Catch INTERFACE)
target_include_directories( 
	Catch INTERFACE 
	${CATCH_INCLUDE_DIR} 
	${SOURCE_PROJECT_INCLUDE_DIR}
	"${CMAKE_CURRENT_SOURCE_DIR}/../../src/"
	"${CMAKE_CURRENT_SOURCE_DIR}/../../deps/catch2"
)

# Make test executable
set(TEST_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/param_test.cpp  ${CMAKE_CURRENT_SOURCE_DIR}/../../src/say_hello.cpp)
add_executable(tests ${TEST_SOURCES})
target_link_libraries(tests Catch)

add_test(test_all tests)