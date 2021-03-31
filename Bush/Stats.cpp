#include <iostream>
#include "Stats.hpp"

StatList Stats::CreateStatList(HeroType type)
{
    switch (type)
    {
    case HeroType::Barbarian:
        return GetBarbarianStats();
    
    case HeroType::Sorcerer:
        return GetSorcererStats();
    
    case HeroType::Drunkster:
        return GetDrunksterStats();

    case HeroType::Goblin:
        return GetGoblinStats();
    
    default:
        return StatList();
    }
}

void Stats::Initialize()
{
    std::cout<<"Initializing stats\n";
}

void Stats::Update()
{
    std::cout<<"Updating stats\n";
}

void Stats::Remove()
{
    std::cout<<"Removing stats\n";
}

StatList Stats::GetBarbarianStats()
{
    StatList stats;
    stats.Strength = 5;
    stats.Dexterity = 3;
    stats.Intelligence = 2;
    stats.AlcoholResist = 3;
    return stats;
}

StatList Stats::GetSorcererStats()
{
    StatList stats;
    stats.Strength = 3;
    stats.Dexterity = 3;
    stats.Intelligence = 5;
    stats.AlcoholResist = 2;
    return stats;
}

StatList Stats::GetDrunksterStats()
{
    StatList stats;
    stats.Strength = 3;
    stats.Dexterity = 2;
    stats.Intelligence = 2;
    stats.AlcoholResist = 5;
    return stats;
}

StatList Stats::GetGoblinStats()
{
    StatList stats;
    stats.Strength =4;
    stats.Dexterity = 3;
    stats.Intelligence = 1;
    stats.AlcoholResist = 1;
    return stats;
}
