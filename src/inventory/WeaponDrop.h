#ifndef WEAPONDROP_H
#define WEAPONDROP_H

#include <string>
#include <SDL2/SDL.h>

#include "../collision/HitBox.h"
#include "../basic/Entity.h"
#include "../collision/CollisionHandler.h"
#include "weapons/Weapon.h"

/*
 * Created by Maitiu
 * Description: Weapon Drop is an Entity rendeered in that game that the player can "Pick up"
 * inorder to get a weapon that the Weapon Drop has been assigned
 */
class WeaponDrop: public Entity{
public:
    WeaponDrop(const int32_t id, const SDL_Rect& dest, const SDL_Rect& pickupSize, const int32_t wId);

    ~WeaponDrop();
    int32_t getId() const;
    int32_t getWeaponId() const;


private:
    int xCoord;
    int yCoord;
    int32_t weaponId;
};


#endif
