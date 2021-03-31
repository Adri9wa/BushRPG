#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>


#include "Bush/Game.hpp"
#include "Bush/Stats.hpp"

//main entry
int main(void) 
{

    const auto barbarianStats = Stats::Shared().CreateStatList(HeroType::Barbarian);
    


    Game::Shared().GameLoop();
    return 0;
}
