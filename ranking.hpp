#ifndef RANKING_HPP
#define RANKING_HPP

#include <iostream>
#include <string>

class playerStats {
    
    std::string playerName;
    std::string statCategory;
    int playerStat;

public:
    playerStats(std::string player_name, std::string category, int stat);

    int get_playerStats();
    std::string get_playerName();
    std::string get_statCategory();

};

#endif // RANKING_HPP