#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    string respuesta;

    cout << "Adivinare en qué deporte estás pensando." << endl;

    cout << "¿En el deporte que piensas se usa balón? (si/no)" << endl;
    cin >> respuesta;

    if (respuesta == "si") {
        cout << "¿Juegan con los pies? (si/no)" << endl;
        cin >> respuesta;

        if (respuesta == "si") {
            cout << "Estás pensando en fútbol." << endl;
        }
        else {
            cout << "¿El balón es ovalado? (si/no)" << endl;
            cin >> respuesta;

            if (respuesta == "si") {
                cout << "Estás pensando en fútbol americano." << endl;
            }
            else {
                cout << "Estás pensando en baloncesto." << endl;
            }
        }
    }
    else {
        cout << "¿Se juega en el agua? (si/no)" << endl;
        cin >> respuesta;

        if (respuesta == "si") {
            cout << "Estás pensando en natación." << endl;
        }
        else {
            cout << "¿Se usa raqueta? (si/no)" << endl;
            cin >> respuesta;

            if (respuesta == "si") {
                cout << "¿La pelota es pequeña? (si/no)" << endl;
                cin >> respuesta;

                if (respuesta == "si") {
                    cout << "Estás pensando en ping-pong." << endl;
                }
                else {
                    cout << "Estás pensando en tenis." << endl;
                }
            }
            else {
                cout << "No pude adivinar el deporte." << endl;
            }
        }
    }

    return 0;
}