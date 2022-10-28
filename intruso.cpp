#include "intruso.hpp"
#include <iostream>
#include <string>
#include <map>
void Intruso::set_senha_vazada(std::string vazou){
    std::string cod,let;
    int tam=vazou.size();
    for(int x=0;x<tam;x++){
        if(x<=18){
        cod.push_back(vazou[x]);
        x++;
        }
        else if(x<33 && x>18){
            let.push_back(vazou[x]);
           x++;
        }
    }
    senhas.insert({cod,let});
    codigos.push_back(cod);
}
std::string Intruso::crack_senha(){
    for(std::string x : codigos){
        for(int s=0;s<6;s++){
         if(x[s]=='A'){
             p[s].insert({x[0],p[s][x[0]]+=1});p[s].insert({x[6],p[s][x[6]]+=1});
         }
        }
    }
    char c_maior;
    int n_maior=0;
    for (std::map<char,int>::iterator it=p[0].begin(); it!=p[0].end(); ++it){
           if(it->second>n_maior){
               c_maior=it->first;
               n_maior=it->second;
           }
    } std::cout<<c_maior<< " ";n_maior=0;
    return "terminou";
}