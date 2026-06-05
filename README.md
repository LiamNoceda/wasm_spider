# Wasm Spider - оса паук
# User Spider - ввод данных пользовательского паука

Простой код на C++ с использованием структуры `Spider` и современного стандарта C++20.

## Что делает программа
Создает объект `wasm_spider` с заданными характеристиками и выводит их в консоль в красивом стиле.

## Характеристики структуры паука
- Имя (`name`)
- Пол (`sex`)
- Ширина и длина с учетом ног (`x`, `y`)
- Возраст (`age`)

## Исходный код проекта
```cpp
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
    std::cout << "Create your own spider:\n";

    std::cout << "Enter spider name: ";
    std::cin >> user_spider.name;

    std::cout << "Enter spider sex: ";
    std::cin >> user_spider.sex;

    std::cout << "Enter spider width (x): ";
    std::cin >> user_spider.x;

    std::cout << "Enter spider height (y): ";
    std::cin >> user_spider.y;

    std::cout << "Enter spider age: ";
    std::cin >> user_spider.age;

    std::cout << "Your spider info:\n";
    print_spider_info(user_spider);

    return 0;
}
```

## Как скомпилировать и запустить
Для сборки кода требуется компилятор с поддержкой **C++20** (например, GCC 10+, Clang 10+ или MSVC 2019+).

```bash
# Компиляция (флаг -std=c++20 обязателен)
g++ -std=c++20 main.cpp -o wasm_spider

# Запуск программы
./wasm_spider
```

## Пример вывода в консоль
```text
Wasm-Spider
        Name this spider is Webby
        Sex-Pol Male
        Spider x and y 4.5-5.2
        Spider age 1
```

---
