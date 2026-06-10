#pragma once
#include <string>

// Структура для представления паука
struct Spider {
    std::string sex{"Unknown"};
    double x{0.0};
    double y{0.0};
    int age{0};
    std::string name{"NoName"};
};

// Объявдяем функции из spider_fun
void print_spider_info(const Spider& spider);
Spider create_user_spider();