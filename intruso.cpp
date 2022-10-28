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
    std::string frase;
    for(std::string x : codigos){
        for(int s=0;s<6;s++){
         if(senhas[x][s]=='A'){
             p[s].insert({x[0],p[s][x[0]]+=1});p[s].insert({x[1],p[s][x[1]]+=1});
         }
         else if(senhas[x][s]=='B'){
             p[s].insert({x[2],p[s][x[2]]+=2});p[s].insert({x[3],p[s][x[3]]+=1});
         }
         else if(senhas[x][s]=='C'){
             p[s].insert({x[4],p[s][x[4]]+=1});p[s].insert({x[5],p[s][x[5]]+=1});
         }
         else if(senhas[x][s]=='D'){
             p[s].insert({x[6],p[s][x[6]]+=1});p[s].insert({x[7],p[s][x[7]]+=1});
         }
         else if(senhas[x][s]=='E'){
             p[s].insert({x[8],p[s][x[8]]+=1});p[s].insert({x[9],p[s][x[9]]+=1});
         }
        }
    }
    char c_maior;
    int n_maior=0;
    for(int mn=0;mn<6;mn++){
       for (std::map<char,int>::iterator it=p[mn].begin(); it!=p[mn].end(); ++it){
           if(it->second>n_maior){
               c_maior=it->first;
               n_maior=it->second;
           }
    } frase.push_back(c_maior);frase.push_back(' ');n_maior=0;
    }
    
    return frase;
}