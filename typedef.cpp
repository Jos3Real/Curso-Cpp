#include <iostream>

// typedef std::string texto_t;
// typedef int num_t;

using texto_t = std::string;
using num_t = int;

int main (){

    texto_t nombre = "Jose";
    num_t num = 20;
    std::cout << nombre << " " << num << std::endl;

    return  0;
}