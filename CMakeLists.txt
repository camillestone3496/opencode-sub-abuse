cmake_minimum_required(VERSION 3.16)
project(opencode-sub-abuse CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(opencodesubabuse
    src/main.cpp
    src/accounts.cpp
    src/trials.cpp
    src/keeper.cpp
    src/cli.cpp
)

target_include_directories(opencodesubabuse PRIVATE include)

if(WIN32)
    target_link_libraries(opencodesubabuse PRIVATE userenv)
endif()
