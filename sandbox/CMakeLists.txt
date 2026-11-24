add_executable(CoffeeBeanSandbox
    src/main.cpp
)

target_link_libraries(CoffeeBeanSandbox
    PRIVATE
        CoffeeBean::CoffeeBean
)   