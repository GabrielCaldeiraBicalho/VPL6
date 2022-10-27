#include "intruso.hpp"
#include <iostream>
#include <string>
void Intruso::set_senha_vazada(std::string vazou){
    std::string cod,let;
    int tam=vazou.size();
    for(int x=0;x<tam;x++){
        if(x<=4 &&x<=9){
        cod.push_back(vazou[x]);
        }
        else if(x<16 && x>9){
            let.push_back(vazou[x]);
        }
    }
    senhas.insert({cod,let});
    codigos.push_back(cod);
}
std::string Intruso::crack_senha(){
    for(std::string x : codigos){
        std::cout << senhas[x] << std::endl;
    }
    return "0";
}