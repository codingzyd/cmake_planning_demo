project(showresult)

add_library(${PROJECT_NAME} showresult.cpp)

target_include_directories(${PROJECT_NAME}
PUBLIC
${Process_Dir}
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
process
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
easyx
)