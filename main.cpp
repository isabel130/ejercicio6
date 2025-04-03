//
// Algoritmo que ayude a convertir la temperatura de grados Celsius a Fahrenheit.

#include <iostream>
using namespace std;

int main() {

    double grados_C, grados_F;
    cout << "Grados Celsius: ";
    cin >> grados_C;

    grados_F = (grados_C *1.8) + 32;

    cout << "Grados Fahrenheit: " << grados_F;

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.