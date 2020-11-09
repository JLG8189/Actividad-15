
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> strings;
    string opc;

    while (true)
    {
        cout << endl << "1) Agregar final" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Inicializar" << endl;
        cout << "4) Frente" << endl;
        cout << "5) Ultimo" << endl;
        cout << "6) Ordenar" << endl;
        cout << "7) Insertar" << endl;
        cout << "8) Eliminar" << endl;
        cout << "9) Eliminar ultimo" << endl;
        cout << "0) Salir" << endl;
        cout << "Opcion: ";
        getline(cin, opc);

        if (opc == "1")
        {
            string a;

            cout << "String: ";
            getline(cin, a);

            strings.push_back(a);
        }
        else if (opc == "2")
        {
            for (size_t i = 0; i < strings.size(); i++)
            {
                cout << strings[i] << ", ";
            }
            cout << endl;
        }
        else if (opc == "3")
        {
            size_t n;
            string a;

            cout << "tam: ";
            cin >> n;
            cin.ignore();
            cout << "string: ";
            getline(cin, a);
            //cin.ignore();

            strings = vector<string>(n, a);
        }
        else if (opc == "4")
        {
            if (strings.empty())
            {
                cout << "vector está vacío" << endl;
            }
            else
            {
                cout << strings.front() << endl;
            }
        }
        else if (opc == "5")
        {
            if (strings.empty())
            {
                cout << "vector está vacío" << endl;
            }
            else
            {
                cout << strings.back() << endl;
            }
        }
        else if (opc == "6")
        {
            sort(strings.begin(), strings.end());
        }
        else if (opc == "7")
        {
            size_t p;
            string a;

            cout << "posición: ";
            cin >> p;
            cin.ignore();
            cout << "string: ";
            getline(cin, a);

            if (p >= strings.size())
            {
                cout << "posición no válida" << endl;
            }
            else
            {
                strings.insert(strings.begin() + p, a);
            }
        }
        else if (opc == "8")
        {
            size_t p;

            cout << "posición: ";
            cin >> p;
            cin.ignore();

            if (p >= strings.size())
            {
                cout << "posición no válida" << endl;
            }
            else
            {
                strings.erase(strings.begin() + p);
            }
        }
        else if (opc == "9")
        {
            if (strings.empty())
            {
                cout << "vector está vacío" << endl;
            }
            else
            {
                strings.pop_back();
            }
        }

        else if (opc == "0")
        {
            break;
        }
    }

    return 0;
}