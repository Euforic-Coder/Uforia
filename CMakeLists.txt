cmake_minimum_required (VERSION 2.8.11)
project (uforia)     

# Set the C++ standard (change to your desired version)
set(CMAKE_CXX_STANDARD 11)

# Set the paths to your library's header files
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Set the paths to your library's source files
set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

# Collect all the header files in your library's "include" directory
file(GLOB HEADER_FILES ${INCLUDE_DIR}/*.h)

add_executable(test src/main.cpp)

add_library(colored include/colored.h)
add_library(from include/from.h)
add_library(has include/has.h)
add_library(messages include/messages.h)
add_library(random include/random.h)
add_library(strings include/strings.h)
add_library(helpmenu include/helpmenu.h)
add_library(debug include/debug.h)
add_library(unique include/unique.h)
add_library(count include/count.h)
add_library(ascii include/ascii.h)
add_library(uforia include/uforia.h)

# Set the language of the files
foreach(target IN ITEMS colored from has messages random strings helpmenu debug unique count ascii uforia)
	set_target_properties(${target} PROPERTIES LINKER_LANGUAGE CXX)
endforeach()

# Set the include directories for the library target
target_include_directories(uforia PUBLIC ${INCLUDE_DIR})

# Set the installation destinations for the library and its headers
install(TARGETS uforia
        EXPORT uforia_targets
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        RUNTIME DESTINATION bin
        INCLUDES DESTINATION include
)

install(DIRECTORY ${INCLUDE_DIR}/ DESTINATION include)

target_link_libraries(test uforia)
