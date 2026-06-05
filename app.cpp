#include <iostream>
#include <string>

struct Spider {
    std::string sex{"Unknown"};
    double x{0.0};
    double y{0.0};
    int age{0};
    std::string name{"NoName"};
};

int main() {
    std::cout << "Wasm-Spider\n";

    Spider wasm_spider{
        .sex = "Male",
        .x = 4.5,
        .y = 5.2,
        .age = 1,
        .name = "Webby"
    };
    std::cout << "\tName this spider is " << wasm_spider.name << "\n";
    std::cout << "\tSex-Pol " << wasm_spider.sex << "\n";
    std::cout << "\tSpider x and y " << wasm_spider.x << "-" << wasm_spider.y << "\n";
    std::cout << "\tSpider age " << wasm_spider.age << "\n";

    return 0;
}
