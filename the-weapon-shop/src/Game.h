#pragma once

#include <iostream>
#include "../lib/Character.h"
#include "../lib/Merchant.h"
#include "../lib/Weapon.h"

void StartNewGame()
{
    Character RalfTheElf("Ralf", "Elfon",
                         "I drink therefore I am.",
                         Race::Elf, Class::Archer);

    RalfTheElf.Introduce();
}