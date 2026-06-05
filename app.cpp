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
    std::cout << "Wasm-Spider" << std::endl;

    Spider wasm_spider{"Male", 4.5, 5.0, 1, "Ed"};
    std::cout << "\tName this spider is " << wasm_spider.name << std::endl;
    std::cout << "\tSex-Pol " << wasm_spider.sex << std::endl;
    std::cout << "\tSpider x and y " << wasm_spider.x << "-" << wasm_spider.y << std::endl;
    std::cout << "\tSpider age " << wasm_spider.age << std::endl;

    return 0;
}
