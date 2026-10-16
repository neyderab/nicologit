#include <iostream>
#include <string>
#include <cctype> // Librería clave para validar letras y números fácilmente

using namespace std;

int main() {
    string password;
    
    cout << "=== VALIDADOR DE SEGURIDAD CYBER-DEFENSE ===" << endl;
    cout << "Ingresa tu contraseña: ";
    cin >> password;

    // Banderas de reglas
    bool tieneLongitud = (password.length() >= 8);
    bool tieneMayuscula = false;
    bool tieneNumero = false;
    bool tieneEspecial = false;

    // Definimos los caracteres especiales permitidos en un solo string
    string caracteresEspeciales = "!@#$%&*";

    // Recorremos la contraseña
    for (int i = 0; i < password.length(); i++) {
        char c = password[i];

        // Usamos funciones estándar de C++ (Mucho más limpio)
        if (isupper(c)) {
            tieneMayuscula = true;
        }
        if (isdigit(c)) {
            tieneNumero = true;
        }
        
        // Buscamos si el carácter actual existe dentro de nuestro string de especiales
        if (caracteresEspeciales.find(c) != string::npos) {
            tieneEspecial = true;
        }
    }

    // Sumamos los booleanos (true = 1, false = 0)
    int puntaje = tieneLongitud + tieneMayuscula + tieneNumero + tieneEspecial;

    // Mostramos resultados con estilo
    cout << "\n[RESULTADO DEL ESCANEO]" << endl;
    cout << "Puntaje obtenido: " << puntaje << " / 4 reglas cumplidas" << endl;

    if (puntaje <= 2) {
        cout << "Estado: \033[31mDÉBIL\033[0m (Vulnerable a ataques)" << endl;
    } else if (puntaje == 3) {
        cout << "Estado: \033[33mMEDIA\033[0m (Aceptable)" << endl;
    } else {
        cout << "Estado: \033[32mFUERTE\033[0m (Sistema protegido)" << endl;
    }

    return 0;
}