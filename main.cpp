#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    std::srand(std::time(nullptr));
    ofstream file("pic.txt", std::ios::binary);
    if (!file.is_open()) {
        cerr << "Error: the file is not open!" << endl;
        return 1;
    }

    int height = 0;
    int width = 0;

    cout << "Enter the height of picture: ";
    cin >> height;
    cout << endl;
    cout << "Enter the width of picture: ";
    cin >> width;

    int pic[width];

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            pic[i] = std::rand() % 2;
            file << pic[i] << "\t";
        }
        file << endl;
    }

    file.close();
    return 0;
}
