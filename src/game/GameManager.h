#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <SDL2/SDL.h>
#include "../creeps/Zombie.h"
#include "../player/Marine.h"
#include "../turrets/Turret.h"
#include "../collision/CollisionHandler.h"
#include "../buildings/Object.h"
#include "../buildings/Base.h"
#include "../buildings/Wall.h"
#include "../buildings/Barricade.h"
#include <map>
#include <unordered_map>
#include <vector>
#include "../UDPHeaders.h"
#include <memory>
#include <iostream>
#include "../inventory/WeaponDrop.h"
#include <memory>
#include <cassert>

//just for tesing weapon drop
#include "../inventory/weapons/Weapon.h"
#include "../inventory/weapons/HandGun.h"
#include "../inventory/weapons/Rifle.h"
#include "../inventory/weapons/ShotGun.h"


class GameManager {
public:
    static GameManager *instance();
    ~GameManager();

    int32_t generateID();

    void renderObjects(SDL_Renderer* gRenderer, const float camX, const float camY); // Render all objects in level

    void createMarine(int32_t id, std::string username);
    // Methods for creating, getting, and deleting marines from the level.
    //int32_t createMarine();
    //int32_t createMarine(int id, SDL_Renderer* gRenderer, float x, float y);
    void deleteMarine(unsigned int id);
    void deleteMarine(const int32_t id);

    const std::map<int32_t, Marine> & getAllMarines() const {return marineManager;}
	const std::map<int32_t, Zombie> & getAllZombies() const {return zombieManager;}


    bool addMarine(const int32_t id, const Marine& newMarine);
    Marine& getMarine(const int32_t id) {return marineManager[id];};

    // Methods for creating, getting, and deleting towers from the level.
    int32_t createTurret();
    void deleteTurret(const int32_t id);

    bool addTurret(const int32_t id, const Turret& newTurret);
    int32_t createTurret(SDL_Renderer* gRenderer, const float x, const float y) ;
    Turret& getTurret(const int32_t id);

    // Method for getting collisionHandler
    CollisionHandler& getCollisionHandler();

    void updateCollider(); // Updates CollisionHandler
    void updateMarines(const float delta); // Update marine actions
    void updateZombies(const float delta); // Update zombie actions

    int32_t addObject(const Object&);
    void deleteObject(const int32_t id);

    int32_t addZombie(const Zombie&);
    bool createZombie(SDL_Renderer* gRenderer, const float x, const float y);
    void deleteZombie(const int32_t id);
    bool createZombieWave(SDL_Renderer* gRenderer, const int n);

    int32_t addWeaponDrop(WeaponDrop& newWeaponDrop);
    bool createWeaponDrop(SDL_Renderer* gRenderer, const float x, const float y);
    void deleteWeaponDrop(const int32_t id);
    WeaponDrop& getWeaponDrop(const int32_t id);
    std::shared_ptr<Weapon> getWeapon(const int32_t id);
    int32_t addWeapon(std::shared_ptr<Weapon> newWeaponDrop);

    int32_t createBarricade(SDL_Renderer* gRenderer, const float x, const float y);
    void deleteBarricade(const int32_t id);
    Barricade& getBarricade(const int32_t id);

    int32_t createWall(SDL_Renderer* gRenderer, const float x, const float y, const int h, const int w); // create Wall object
    void setBoundary(SDL_Renderer* gRenderer, const float startX, const float startY, const float endX, const float endY); // place walls for the boundaries

    //network update Methods
    void updateMarine(const PlayerData &playerData);
    void updateZombie(const ZombieData &zombieData);
    void printMarineCount() {std::cout << "marine count: " << marineManager.size() << std::endl;};
    //temporary dont yell at me
    void setRenderer(SDL_Renderer *renderer) {_renderer = renderer;};

    void deleteBarricade(unsigned int id);
    Barricade& getBarricade(unsigned int id);

    void setPlayerUsername(int32_t id, const char * username);
    const std::string& getNameFromId(int32_t id);
private:
    static GameManager *sInstance;

    //used a ptr because it is a temporary solution
    SDL_Renderer *_renderer;

    GameManager();
    CollisionHandler collisionHandler;
    std::unique_ptr<WeaponDrop> wdPointer;
    std::map<int32_t, Marine> marineManager;
    std::map<int32_t, Object> objectManager;
    std::map<int32_t, Zombie> zombieManager;
    std::map<int32_t, Turret> turretManager;
    std::map<int32_t, WeaponDrop> weaponDropManager;
    std::map<int32_t, std::shared_ptr<Weapon>> weaponManager;
    std::map<int32_t, Barricade> barricadeManager;

};


#endif
