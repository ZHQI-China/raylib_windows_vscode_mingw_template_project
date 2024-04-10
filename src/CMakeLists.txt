project(main)

# 添加模块的 CmakeLists.txt 子目录
# add_subdirectory(module0)

# 添加可执行程序
add_executable(${PROJECT_NAME} main.cpp)

# 包含项目头文件module0、module1...
target_link_directories(${PROJECT_NAME} PUBLIC 
# ${module0_dir} 
${raylib_lib_dir}
)

# 链接库module0、module1
target_link_libraries(${PROJECT_NAME} PUBLIC
# module0
raylib
)