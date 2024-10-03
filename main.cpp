#include <iostream>
#include <string>
#include "ranking.hpp"

int main() {

    playerStats Malik_Nabers("Malik Nabers", "REC YARDS", 386);

    std::cout << Malik_Nabers.get_playerName() << " has " <<
    Malik_Nabers.get_playerStats() << " " << Malik_Nabers.get_statCategory() << "\n";

    return 0;
};