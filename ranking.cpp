#include "ranking.hpp"
#include <iostream>

playerStats::playerStats(std::string player_name, std::string category, int stat)
    : playerName(player_name), statCategory(category), playerStat(stat) {}

int playerStats::get_playerStats() {

    return playerStat;

}

std::string playerStats::get_statCategory() {
    
    return statCategory;

}

std::string playerStats::get_playerName() {
    
    return playerName;

}