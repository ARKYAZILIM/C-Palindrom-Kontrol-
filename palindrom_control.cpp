#include <iostream>
#include <string>

bool palindrom_kontrol(const std::string& str) {
    int sol = 0;
    int sag = str.length() - 1;

    while (sol < sag) {
        if (str[sol] != str[sag]) {
            return false;
        }
        sol++;
        sag--;
    }
    return true;
}

int main() {
    std::string kelime;
    std::cout << "Bir kelime girin: ";
    std::cin >> kelime;

    if (palindrom_kontrol(kelime)) {
        std::cout << kelime << " bir palindromdur." << std::endl;
    } else {
        std::cout << kelime << " bir palindrom değildir." << std::endl;
    }

    return 0;
}
