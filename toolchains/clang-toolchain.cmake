set(CMAKE_C_COMPILER "clang")
#set(CMAKE_C_COMPILER_ID "clang")

set(CMAKE_CXX_COMPILER "clang++")
#set(CMAKE_CXX_COMPILER_ID "clang")

set(CMAKE_C_STANDARD 23) # 90, 99, 11, 17, 23
set(CMAKE_C_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_STANDARD 26)  # 98, 11, 14, 17, 20, 23, 26
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

set(CMAKE_CXX_FLAGS_INIT "-stdlib=libc++")
set(CMAKE_CXX_STANDARD_LIBRARIES "-lc++ -lc++abi")
