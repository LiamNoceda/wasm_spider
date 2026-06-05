# Wasm Spider - оса паук

Простой код на C++ с использованием структуры `Spider`.

## Что делает программа
Создает объект `wasm_spider` с заданными характеристиками и выводит их в консоль в красивом стиле.

## Характеристики структуры паука
- Имя (`name`)
- Пол (`sex`)
- Ширина и длина с учетом ног (`width`, `length`)
- Возраст (`age`)

## Исходный код проекта
```cpp
#include <iostream>
#include <string>

struct Spider {
    std::string sex{"Unknown"};
    double x{0}, y{0};
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
```

## Пример вывода в консоль
```text
Wasm-Spider
        Name this spider is Ed
        Sex-Pol Male
        Spider x and y 4.5-5
        Spider age 1
```
