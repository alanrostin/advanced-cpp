#pragma once
#include <iostream>

#include "Merchant.h"
#include "Weapon.h"
#include "Race.h"
#include "Class.h"

class Character
{
private:
    std::string m_first_name;
    std::string m_last_name;
    std::string m_catch_phrase;
    int m_money = 200;
    int m_life_points = 5;
    Weapon m_weapon;
    Race m_race;
    Class m_class;
public:
    Character() = default;
    Character(const std::string& first_name,
              const std::string& last_name,
              const std::string& catch_phrase,
              Race ch_race, Class ch_class);

    ~Character() = default;

    std::string GetName();
    std::string GetPhrase();
    int GetMoney();
    int GetLifePoints();
    Weapon GetWeapon();
    Race GetRace();
    Class GetClass();

    void Introduce();

    void BuyWeapon(Merchant& merch_shop, Weapon& merch_weapon); // from Merchant
    void SellWeapon(Merchant& merch_shop, Weapon& merch_weapon); // to Merchant
    void UseWeapon(Character& enemy); // to deal damage to another character
    void Loot(Character& defeated); // money and weapon of a defeated Character
};