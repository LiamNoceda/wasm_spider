# Wasm & User Spider Manager

Простой интерактивный код на C++ с использованием структуры Spider и современного стандарта C++20.

## Профессиональные навыки, продемонстрированные в проекте

1. **Модульная архитектура (Многофайловая структура)**: Разделение кодовой базы на заголовочный файл (`spider.hpp`) с объявлением структуры и прототипов функций, файл реализации бизнес-логики (`spider_fun.cpp`) и точку входа (`main.cpp`). Это демонстрирует навык организации и масштабирования проектов.
2. **Designated Initializers (C++20)**: Применение назначенной инициализации для наглядного, безопасного и явного заполнения полей структуры по их именам.
3. **Оптимизация передачи данных**: Передача сложных объектов в функции по константной ссылке (`const Spider&`) для исключения накладных расходов на копирование строк и экономии системных ресурсов.
4. **Агрегатные типы данных**: Проектирование легковесных структур с инициализацией полей по умолчанию для предотвращения появления неинициализированной памяти. ***Защита от мусора в памяти**: Все поля структуры `Spider` инициализируются дефолтными значениями (`0.0`, `0`, `"NoName"`) прямо при объявлении. Это гарантирует, что в объектах не появится случайных чисел из оперативной памяти, предотвращая неопределенное поведение (Undefined Behavior)*.

## Что делает программа
1. Выводит в консоль данные встроенного паука wasm_spider (Webby).
2. Запрашивает у пользователя характеристики в консоли для создания второго, пользовательского паука (user_spider).
3. Форматирует и выводит информацию о созданном пауке на экран.

## Характеристики структуры паука
- Имя (name)
- Пол (sex)
- Ширина и длина с учетом ног (x, y)
- Возраст (age)

---

## Исходный код проекта по модулям

### spider.hpp
```cpp
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
```

### spider_fun.cpp
```cpp
#include "spider.hpp"
#include <iostream>

// Функция для печати информации о пауке
void print_spider_info(const Spider& spider) {
    std::cout << "\tName this spider is " << spider.name << "\n";
    std::cout << "\tSex-Pol " << spider.sex << "\n";
    std::cout << "\tSpider x and y " << spider.x << " - " << spider.y << "\n";
    std::cout << "\tSpider age " << spider.age << "\n";
}

// Процесс создания пользовательского паука
Spider create_user_spider() {
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

    return user_spider;
} 
```

### main.cpp
```cpp
#include <iostream>
#include "spider.hpp"

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
```

---

## Как скомпилировать и запустить

Для сборки многофайлового кода требуется компилятор с поддержкой стандарта C++20 (например, GCC 10+, Clang 10+ или MSVC 2019+).

```bash
# Компиляция всех модулей проекта (флаг -std=c++20 обязателен)
clang++ -std=c++20 main.cpp spider_fun.cpp -o wasm_spider

# Запуск программы
./wasm_spider
```

## Пример вывода в консоль

```text
Wasm-Spider
        Name this spider is Webby
        Sex-Pol Male
        Spider x and y 4.5 - 5.2
        Spider age 1

Create your own spider:
        Enter spider name: Wannesa
        Enter spider sex: Female
        Enter spider width (x): 10.2
        Enter spider height (y): 18.8
        Enter spider age: 8

Your spider info:
        Name this spider is Wannesa
        Sex-Pol Female
        Spider x and y 10.2 - 18.8
        Spider age 8
```
