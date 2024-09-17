#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];            //szintaktikai hiba, rossz konstans névhasználat
    std::cout << '1-100 ertekek duplazasa'      //; hiánya, "" használata kell '' helyett
    for (int i = 0;)                        //értelmetlen for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)                 //helytelen for ciklus
    {
        std::cout << "Ertek:"                  // ; hiány ,illetve kimenet hiányzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;                                  // inicializálás hiánya
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]                       //; hiány
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}

// mermória felszabadítás