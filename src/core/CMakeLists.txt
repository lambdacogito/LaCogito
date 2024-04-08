# source files
file(GLOB core_srcs CONFIGURE_DEPENDS "*.cpp" "*.cc")
add_library(cotigo_core STATIC ${core_srcs})
target_link_libraries(cotigo_core fmt::fmt)

if(TEST_ON)
  add_subdirectory(tests)
endif()
