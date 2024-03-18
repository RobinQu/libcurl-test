cmake_minimum_required(VERSION 3.27)
project(curl_test)

set(CMAKE_CXX_STANDARD 20)

find_package(CURL REQUIRED)

add_executable(curl_test main.cpp)
target_link_libraries(curl_test CURL::libcurl)
