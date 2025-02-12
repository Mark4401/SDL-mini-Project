file(GLOB_RECURSE CPP_FILES
	*.cpp
)


set(MAIN_FILES ${CPP_FILES} ${HEADERS})

add_executable(${PROJECT_NAME} ${MAIN_FILES})

target_link_directories(${PROJECT_NAME} PRIVATE ${SDL3_LIB_DIR})

target_link_libraries(${PROJECT_NAME} SDL3)

set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Export_Files
    # LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Export_Files/bin
)