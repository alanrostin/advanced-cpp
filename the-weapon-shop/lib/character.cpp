#include <iostream>
#include "Character.h"
#include "Merchant.h"

Character::Character(const std::string& first_name,
                     const std::string& last_name,
                     const std::string& catch_phrase,
                     Race ch_race, Class ch_class)
{
    m_first_name = first_name;
    m_last_name = last_name;
    m_catch_phrase = catch_phrase;
    m_race = ch_race;
    m_class = ch_class;
}

Character::~Character() = default;

std::string Character::GetName()
{
    return m_first_name + " " + m_last_name;
}

std::string Character::GetPhrase()
{
    return m_catch_phrase;
}

int Character::GetMoney()
{
    return m_money;
}

int Character::GetLifePoints()
{
    return m_life_points;
}

Weapon Character::GetWeapon()
{
    return m_weapon;
}

Race Character::GetRace()
{
    return m_race;
}

Class Character::GetClass()
{
    return m_class;
}

void Character::Introduce()
{
    std::cout << "Hello! My name is " << Character::GetName() << std::endl;
    std::cout << "I am an " << Character::GetRace() << " " << Character::GetClass() << std::endl;
    std::cout << "My catch phrase is " << Character::GetPhrase() << std::endl;
}

void Character::BuyWeapon(Merchant& merch_shop, Weapon& merch_weapon)
{

}

void Character::SellWeapon(Merchant& merch_shop, Weapon& merch_weapon)
{

}

void Character::UseWeapon(Character& enemy)
{

}

void Character::Loot(Character& defeated)
{

}