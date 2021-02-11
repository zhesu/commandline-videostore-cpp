add_executable(SingleTest singleTest.cpp)

target_link_libraries(SingleTest StoreLib)
add_test(
        NAME SingleTest
        COMMAND SingleTest)
