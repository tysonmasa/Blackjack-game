CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(runAllTests
    test.cpp
    ../src/Deck.cpp
    ../src/Card.cpp
    ../src/Player.cpp
)

TARGET_LINK_LIBRARIES(runAllTests gtest)
TARGET_COMPILE_DEFINITIONS(runAllTests PRIVATE gtest_disable_pthreads=ON)
