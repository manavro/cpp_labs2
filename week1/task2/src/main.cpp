#include <iostream>
#include <limits>


int main() {
	setlocale(LC_ALL, "RU");
    std::cout << "Минимальные и максимальные значения числовых типов данных в C++:\n";

    // int
    std::cout << "int:\n";
    std::cout << "Минимальное: " << std::numeric_limits<int>::min() << "\n";
    std::cout << "Максимальное: " << std::numeric_limits<int>::max() << "\n\n";

    // unsigned int
    std::cout << "unsigned int:\n";
    std::cout << "Минимальное: " << std::numeric_limits<unsigned int>::min() << "\n";
    std::cout << "Максимальное: " << std::numeric_limits<unsigned int>::max() << "\n\n";

    // short
    std::cout << "short:\n";
    std::cout << "Минимальное: " << std::numeric_limits<short>::min() << "\n";
    std::cout << "Максимальное: " << std::numeric_limits<short>::max() << "\n\n";

    // unsigned short
    std::cout << "unsigned short:\n";
    std::cout << "Минимальное: " << std::numeric_limits<unsigned short>::min() << "\n";
    std::cout << "Максимальное: " << std::numeric_limits<unsigned short>::max() << "\n\n";

    // long
    std::cout << "long:\n";
    std::cout << "Минимальное: " << std::numeric_limits<long>::min() << "\n";
    std::cout << "Максимальное: " << std::numeric_limits<long>::max() << "\n\n";

    // unsigned long
    std::cout << "unsigned long:\n";
    std::cout << "Минимальное: " << std::numeric_limits<unsigned long>::min() << "\n";
    std::cout << "Максимальное: " << std::numeric_limits<unsigned long>::max() << "\n\n";

    // float
    std::cout << "float:\n";
    std::cout << "Минимальное: " << std::numeric_limits<float>::min() << "\n";
    std::cout << "Максимальное: " << std::numeric_limits<float>::max() << "\n\n";

    // double
    std::cout << "double:\n";
    std::cout << "Минимальное: " << std::numeric_limits<double>::min() << "\n";
    std::cout << "Максимальное: " << std::numeric_limits<double>::max() << "\n\n";

    // long double
    std::cout << "long double:\n";
    std::cout << "Минимальное: " << std::numeric_limits<long double>::min() << "\n";
    std::cout << "Максимальное: " << std::numeric_limits<long double>::max() << "\n";

    return 0;
}
