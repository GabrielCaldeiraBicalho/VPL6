#include <string>
#include <map>
#include <vector>
class Intruso{
    private:
    std::map<std::string,std::string> senhas;
    std::vector<std::string> codigos;
    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};