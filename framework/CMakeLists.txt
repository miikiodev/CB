add_library(CoffeeBean STATIC
    "src/Version.cpp"
)

add_library(CoffeeBean::CoffeeBean ALIAS CoffeeBean)

target_include_directories(CoffeeBean
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(CoffeeBean
    PUBLIC
        cxx_std_23
)

find_package(SFML CONFIG REQUIRED COMPONENTS System Window)

target_link_libraries(CoffeeBean
    PUBLIC
        SFML::System
        SFML::Window
)