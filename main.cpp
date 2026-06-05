#include <iostream>
#include <string>

struct Spider {
    std::string sex{"Unknown"};
    double x{0.0};
    double y{0.0};
    int age{0};
    std::string name{"NoName"};
};

void print_spider_info(const Spider& spider) {
    std::cout << "\tName this spider is " << spider.name << "\n";
    std::cout << "\tSex-Pol " << spider.sex << "\n";
    std::cout << "\tSpider x and y " << spider.x << "-" << spider.y << "\n";
    std::cout << "\tSpider age " << spider.age << "\n";
}

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
    Spider user_spider;
    std::cout << "\nCreate your own spider:\n";

    std::cout << "\tEnter spider name: ";
    std::cin >> user_spider.name;

    std::cout << "\tEnter spider sex: ";
    std::cin >> user_spider.sex;

    std::cout << "\tEnter spider width (x): ";
    std::cin >> user_spider.x;

    std::cout << "\tEnter spider height (y): ";
    std::cin >> user_spider.y;

    std::cout << "\tEnter spider age: ";
    std::cin >> user_spider.age;

    std::cout << "\nYour spider info:\n";
    print_spider_info(user_spider);

    return 0;
}
