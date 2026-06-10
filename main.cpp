#include <iostream>
#include "spider.hpp"

void print_spider_info(const Spider& spider);
Spider create_user_spider();

int main() {
    std::cout << "Wasm-Spider\n";

    //Мой первый паук, который созданный в коде
    Spider wasm_spider{
        .sex = "Male",
        .x = 4.5,
        .y = 5.2,
        .age = 1,
        .name = "Webby"
    };
    print_spider_info(wasm_spider);

    // Создание пользовательского паука с помощью ввода данных
    Spider user_spider = create_user_spider();

    std::cout << "\nYour spider info:\n";
    print_spider_info(user_spider);

    return 0;
}
