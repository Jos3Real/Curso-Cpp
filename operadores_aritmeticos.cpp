#include <iostream>

int main () {

    // *****SUMA*****
    int num_suma = 20;
    //num_suma = num_suma + 1;
    //num_suma += 1;
    num_suma ++;

    // *****RESTA*****
    int num_resta = 20;
    //num_resta = num_resta - 1;
    //num_resta -= 1;
    num_resta --;

    // *****MULTIPLICACIÓN*****
    int num_mult = 20;
    //num_mult = num_mult * 2;
    num_mult *= 2;

    // *****DIVISIÓN*****
    double num_div = 20;
    //num_div = num_div / 2;
    num_div /= 3;

    // *****MODULO*****
    int num_modulo = 20;
    int resto = num_modulo % 2;

    //Orden de las operaciones aritmeticas

    int total = 2 * 5 + (3 - 6) + 4 / 20;

    std::cout << num_suma << std::endl;
    std::cout << num_resta << std::endl;
    std::cout << num_mult << std::endl;
    std::cout << num_div << std::endl;
    std::cout << resto << std::endl;
    std::cout << total << std::endl;

    return 0;
}