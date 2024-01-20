cmake_minimum_required (VERSION 3.22)

project(Timer)

set(CMAKE_CXX_STANDARD 20)

add_executable(timer
	src/main.cpp
   "src/Clock.cpp"
	src/InternalClock.cpp
)

target_include_directories(timer PUBLIC ${CMAKE_SOURCE_DIR}/hpp)