#pragma once
//_STATS_HPP_
#ifndef _STATS_HPP_
#define _STATS_HPP_

#include "Component.hpp"

struct StatList
{
    int Strength;
    int Intelligence;
    int Health;
    int Attack;
    int Stamina;
    int AlcoholResist;
    int Dexterity;
};

enum HeroType
{
    Barbarian, Sorcerer, Drunkster, //Main Hero
    Goblin //Enemies
};


class Stats : public Component
{
public:
    static Stats& Shared()
    {
        static Stats instance;
        return instance;
    }

    void Initialize() override;
    void Update() override;
    void Remove() override;

StatList CreateStatList(HeroType type);

Stats() = default;
Stats(const Stats&) = default;
Stats(Stats&&) = default;

private:
    StatList GetBarbarianStats();
    StatList GetSorcererStats();
    StatList GetDrunksterStats();
    StatList GetGoblinStats();
    
    StatList heroStat;

};



#endif
//_STATS_HPP