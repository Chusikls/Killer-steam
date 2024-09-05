#include <iostream>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    int file, download = 0, procentDowload, speed, time = 0;
    float procent;
    std::cout << "Введите размер файла: " << "\n";
    std::cin >> file;
    std::cout << "Введите скорость скачивания: " << "\n";
    std::cin >> speed;
    if (file == 0 || speed == 0) {
        return 1;
    }
    procent = float(file) / 100;
    while (download < file) {
        time = time + 1;
        download = download + speed;
        procentDowload = (download / procent);
        std::cout << "Прошло " << time << " сек.";
        if (download > file) {
            procentDowload = 100;
            download = file;
        }
        std::cout << " Скачано " << download << " из " << file << " МБ" << " (" << procentDowload << "%)\n";
    }
}
