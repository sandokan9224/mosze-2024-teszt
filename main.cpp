#include <iostream>

const int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];            //szintaktikai hiba, rossz konstans névhasználat .... javítva
    std::cout << "1-100 ertekek duplazasa";      //; hiánya, "" használata kell '' helyett ... javítva
    for (int i = 0; i<N_ELEMENTS; i++)                        //értelmetlen for ciklus ... javítva
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<N_ELEMENTS; i++)                 //helytelen for ciklus... javítva
    {
        std::cout << "Ertek:"  << b[i] << std::endl;                 // ; hiány ,illetve kimenet hiányzik ... javítva
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;                                  // inicializálás hiánya ... javítva
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];                       //; hiány ... javítva
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    delete [] b;
    return 0;
}

// mermória felszabadítás ... javítva