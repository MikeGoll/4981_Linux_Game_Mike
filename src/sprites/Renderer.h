#ifndef RENDERER_H
#define RENDERER_H
/*
====================================================================================================
....................................``````````.:/++``......-/oso+/:-..
.........`  `......................`````....-:+o+ss+-/osssydhhhhyysssoo+/-
..........```......................```../+///+yhsoshhhyhhhhdddddddhhhhyyss+-
........................................:////+++sydddddddddhdddmmmmddddhyyso/:.
-........................................://++syhhdhdddddmmdddddmmmmmdddhyyyooo:.
------------------------------------------:/oyhdhddddddddmmmdddmddddddddhyyhsoos+:.
----::-:::::::::--------------------------/shddddddddddddmdddddddhhhhhhhyyhhysssyo/-
:::::::::::::::--------------------------ohddddddmmmmmmddddddddhyyyyhhyyyyyyssysyss+:
:::::::::::::---------------------------+hmmddddmmmmmmmddddddhyyhddddddyydhyyoosysso+-
:::::::::-------------------...........:hdmmdmmmmmmddhyhhyssssodmmmmmmmddddhyso-+ssoso-`
-------------..........................+hdmmmmmdhhddmddmmdyshhyhmmmmmmmmddhhhys++ssoyys-
-------------......------.............-shdmmmmhdddmmmmmmmmhhhyyyhdmmmmmmddhhhyy+ossyyyyo.
:/--------------------::---..........-+hddmmmhmmmmmmmmmmmmhhysoosyhdmmmmmmmdhys::oyyysyo-
::...--:://++++:----------------------smmddmhdmmmmmmmmmmmddysooo+++shhhddddhyo/::/hhyyyo-.
.......--::::///:---------------------ydmmmmydmNmmmmmmNmddhyyyyssyys+syysssoo+/::-/hyyso:-
......``...................-----------sdmmmmdhmmNNNNNmmdddyhddhyydmdsossoo+++///:-.ossys+:
+++///::---...................--------+hdmmmmmddmmmmmdddhhyhmmhyyyyyysssooo++//::-.:ooyy+:
+++++++++++++///:::-----...--------:--:sdmmmmmdyhhdddhyyyyhhdhyyyysooooooooo++/::-../+hs
++++++++++++++++++++++++++//++++ooosssoohdmmmmmyyyyyyssssyyyyyysyyyyyssooooo++//:-..-/o+
++++++++++++++++++++++++++ooooossssysssydddmmmmysssssssssyyyyyhhhhhhhyysyyysso+/:--..--/
+++++++++++++++++++++++++++oooooosssssosyhdmmmmhsssssssyysyyhhhhyyyyyysoooosso+/:-..`-:/
+++++++++++++++++++++++++++++ooooossooooosydmmddyossssyyyyyhhyyyyyhhyyysssoooo+/:-..`//
//+++++++++++++++/+++++++++++ooooosossssooydmmmdhoossyyyyyyyyyyyyyyysssssoooo++/:-.`.+
/////////////++++//+++++++++++oooossddyo+oshddmmyoosyyyyyyyyyyyyyssssssoooo+////-.``/
:::://///////////++//++++++++++oooosmy/+///+ymdmhyoosyyyyyyyyyysssssyyssssso+:---.`:
---:-------::::::///////++++++++oossmo:+:--:ohdmNdyosyyyhyhyyyyyyyyyyyyyyyso+:--..`:
::::::::::::-----/:--:://+++++++oosymdo////shhddmmdsssyyhhhhhhhhhhyyyyyyyys+/:-..``-
/:::::::++////+/+++//////+++++oooossyyysssssssssyddysyyhhhhhhhddhhhyyyyysso+/:-..``-
  ```...----::////s///+/:+////////+ossooooooooooohhysyhhhhhhhhhhhhhhhyyysso+/:--.``.
        ``     ``/s`..--::///////+osssoooooooooooydysyyhhhhhhhhhhhhhhhyyyyso+/:-..`.
        ``     ``os  ```...------:sooooooooooooooyddyyyyhhhhhhhhhhhhhhhyyysso+/-..``/:
         ```````:/s````......:-.--oooooooooooosyyyhddyyyyyyyhhhhhhhyyyyyyyyso+/-..`.so
        `````...+:...........-:o-:ooooosyyhdmmNNNmNNNdhhyyyyyyyyyyyyyyyyyyyss+/:-...yyo
        ````.:::/:::::::::-.....:/oshdmNNNNmNNNNNNNNNNdhhyyyyyyyyyyyyyyyyyysso/:-..-yhyo
       ```...-/+/::::::::/+/-.:+sdmmNNNNNNNNNNNNNNNNNNNmhhhyyyysssssssssssssso/:--.:yhhyo
       ``...---:`-----.....oyhdmmmmmNNNNNNNNNNNNNNNNNNNNNdhhhyysssssssssssssoo+::--:/yyyyyys+
      ``....---:`------/+yddmmmmmmNNNNNNNNNNNNNNNNNNNNNNNNNmdhyysssssssssssooo+/:-:+:+yyyyyddhys+
      ``...-:::/`:+oyhdmmmmmmmmmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNmhyyysssssssooooo+/::/+::syyyyyddddhhy
      ``..--:/+syhddmmmmmmmmmmmmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNmyyyyysssoooooo+++/:/+/-+yyyysyddmmddh
      `-.--:+yhdddmmmmmmmmmmmmmmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNdssyysssoooooo++++////:/syyyyshddmmmm
     ``..-/ydddmmmmmmmmmmmNNNNNmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNhoossssoooo+++oo+/://:/oyyyysyhddmmm
     ``.:shdddddmmmmmmmmmmmNNNNNmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNy+ossoo+++++++++/:////ohysyssyddddm
```....+hdddddmmmmmmmmmmmmNNNNNNNmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNyoooys++/////+///////oddssssshdddd
ssssssshdddmmmmmmmmmmNNmmmNNNNNNNNmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNmsoooydyo///////////+ydmdssssydddd
---/shdddmdmmmmmmmmmmNNNmmmNNNNNNNmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNdsooosmmho////////+ohdmmhssssyddd
-.:yddmmmmmmmmmmmmmmmNNNmmmmNNNNNNNmNNNNNNNmNNNNNNNNNNNNNNNNNNNNNNNNhsossymNNds+////+oyddmmmysssshmm
oyddmmmmmmmmmmNNmmmmmmmmmmmmmNNNNNNNmNNNNNNNmNNNNNNNNNNNNNNNNNNNNNNNNyssssymNNNmyo++oydddmmmmyssssdm
hddmmmmdmmmmmmNNNNmmdmmmmmmmmmNNNNNNNNNNNNNNNmNNNNNNNNNNNNNNNNNNNNNNNNyssssymNNNNmhsshddmmmmmdssssym
ddmmmmmmmmmmmmmNNNNmmmmmmmmmmmNNNNNNNmNNNNNNNmmNNNNNNNNNNNNNNNNNNNNNNNmsssyshmNNNNNmddmmmmmmmmhssssy
dmmmmmmmmmmmmmmNNNNNmdmmmmmNNNNNNNNNNNmNNNNNNNNmNNNNNNNNNNNNNNmNNNNNNNNdssyyshNNNNNNNNmNmNNmmmmyssos
mmmmmmmmmmmmmmNNNNNNNmmmmmmmNmmNNNNNNNmNNNNNNNNmmNNNNNNNNNNNNNNmNNNNNNNNhsyyyydNNNNNNNNmmmmmdmmmysso
mmmmmmmmmmmmmNNNNNNNNNmmmmmNNNNNNNNNNNNmNNNNNNNNmmNNNNNNNNNNNNNNNNNNNNNNNyyyyyymNNNNNNNmmmmmdmmmdsss
mdmmmmmmmmmmmNNNNNNNNNNmmmmNNNNNNNNNNNNmNNNNNNNNNmNNNNNNNNNNNNNNNNNNNNNNNmyyyyyymNNNNNNNmmmddmmmmyss
ddmmmmmmmmNNNNNNmmNNNNNNmmmmmmmmNNNNNNNNmNNNNNNNNNmNNNNNNNNNNNNNNmNNNNNNNNdyyyyyhNNNNNNNNmmddmmmmmso
dmmmmmmmmmNNNNNNmmNNmNNNNmmdmmmmNNNNNNNNmNNNNNNNNNNmNNNNNNNNNNNNNNmNNNNNNNNhyyhyyhNNNNNNNNmdddmmmmds
ddmmmmmmmmmNNNNNNNNNNNNNNNmmmmmmNNNNNNNNNmNNNNNNNNNNmNNNNNNNNNNNNNNmNNNNNNNmhyyhyydNNNNNNNNmddmmmmmy
mmmmmmmmmmNNNNNNNNNNNNNNNNmmddmNNNNNNNNNNmmNNNNNNNNNmmNNNNNNNNNNNNNmmNNNNNNNmyyyhyymNNNNNNNNmmmmmmmd
mmmmmmmmmmNNNNNmNNNNmNNNNNNmmddmNNNNNNNNNNmNNNNNNNNNNmNNNNNNNNNNNNNNmmNNNNNNNdyyhhyhmNNNNNNNNmmmmdmm
mmmmmmmmmmmNmmNNmNNNNmNNNNNmmmmdmNNNNNNNNNmmNNNNNNNNNNmNNNNNNNNNNNNNNmmNNNNNNmhyyhyyhNNNNNNNNmmmmhdm
mmmmmmmmmmmmmmmNNNNNNNmNNNNmmmmmmmNNNNNNNNNmNNNNNNNNNNNmNNNNNNNNNNNNNmmNNNNNNNmhyhyyydNNNNNNNmNmmhdm
====================================================================================================
                        ____________________/=============\____________________
                       /[{}]\               [Mike's Prayer]               /[{}]\
                      /   /                 \=============/                 \   \
                     [{}]/---------------------------------------------------\[{}]
                        \| Our Mike who art in linux, hallowed be thy guitar.|/
                        ][ Your P.R. come.                                   ][
                        ][      Your Merge be done,                          ][
                        ][              on Github as it is on local.         ][
                        ][ Give us this day our daily Salt.                  ][
                        ][ And forgive us our Merge Conflicts,               ][
                        ][          as we also have forgiven our pointers.   ][
                        ][ And do not bring us to the time of bad netcode,   ][
                        /|      but deliver us from the evil lag.            |\
                     [{}]\---------------------------------------------------/[{}]
                       \[{}]/                                             \[{}]/

*/
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <array>
#include <string>
#include <map>

#include "../sprites/SpriteTypes.h"
#include "../log/log.h"

/* HEADER: Renderer.h
 * FUNCTIONS:
 *      static Renderer& instance()
 *      SDL_Texture *getTexture(int spriteType)
 *      SDL_Renderer *getRenderer()
 *      void setWindow(SDL_Window *win)
 *      void loadSprites()
 *      TTF_Font *loadFont(const std::string& fonts, const int size)
 *      void createText(const TEXTURES index, TTF_Font *font, const std::string& text, const SDL_Color& colour)
 *      int createTempText(TTF_Font *font, const std::string& text, const SDL_Color& colour)
 *      int createTempTexture(const std::string& filePath)
 *      void render(const SDL_Rect& dest, const TEXTURES spriteType, const double angle = 0.0,
                const SDL_Point *center = nullptr, const SDL_RendererFlip flip = SDL_FLIP_NONE)
 *       void render(const SDL_Rect& dest, const int spriteType, const double angle = 0.0,
                const SDL_Point *center = nullptr, const SDL_RendererFlip flip = SDL_FLIP_NONE)
 *       void render(const SDL_Rect& dest, const int spriteType, const SDL_Rect& clip, const double angle = 0.0,
                const SDL_Point *center = nullptr, const SDL_RendererFlip flip = SDL_FLIP_NONE)
 *       void render(const SDL_Rect& dest, const TEXTURES spriteType, const SDL_Rect& clip,
                const double angle = 0.0, const SDL_Point *center = nullptr,
                const SDL_RendererFlip flip = SDL_FLIP_NONE)
 *       void render(const SDL_Rect& dest, const TEXTURES spriteType, const SDL_Rect& clip,
                int w, int h)
 *       void createTexture(const TEXTURES index, const std::string& filePath)
 *       void createTexture(const int index, const std::string& filePath)
 *       void setRenderer()
 * REVISIONS: Isaac Morneau | Changed points to references | March 25, 2017
 * DEVELOPER: Michael Goll
 * DESIGNER:  Michael Goll
 * DATE:      March 14, 2017
 * NOTES:     Handles all of the renderering done within the game.
 */

//-------- Game Screens --------
const std::string MAIN_SCREEN = "assets/TitleScreen_Marz.png";

const std::string TEXTBOX_TEXTURE = "assets/texture/textbox.png";
const std::string TEXTBOX_ACTIVE_TEXTURE = "assets/texture/textboxActive.png";
const std::string TEXTBOX_TRANSPARENT_TEXTURE = "assets/texture/textboxTransparent.png";
//#define LOBBY_SCREEN "assets/texture/Map/" // <-- Will be used at a later date to show lobby bg


//--------------------- Hud textures ---------------------
const std::string WEAPON_CLIP_FULL_TEXTURE = "assets/texture/hud/weaponClipFull.png";
const std::string WEAPON_CLIP_EMPTY_TEXTURE = "assets/texture/hud/weaponClipEmpty.png";
const std::string ACTIVE_SLOT_TEXTURE = "assets/texture/hud/activeWeaponSlot.png";
const std::string PASSIVE_SLOT_TEXTURE = "assets/texture/hud/inactiveWeaponSlot.png";
const std::string HEALTHBAR_TEXTURE = "assets/texture/hud/healthbar.png";
const std::string CONSUMABLE_SLOT_TEXTURE = "assets/texture/hud/consumableSlot.png";
const std::string EQUIPPED_WEAPON_SLOT_TEXTURE = "assets/texture/hud/equippedWeaponSlot.png";

// ---------- Consumable Textures ----------
const std::string HEALTHPACK_TEXTURE = "assets/texture/hud/inventoryItems/firstAid.png";


//-------- Map Textures --------
const std::string MAP_TEXTURE_PATH = "assets/texture/Map/";
const std::string TEXTURE_DIRT = MAP_TEXTURE_PATH + "dirt_grass.png"; //terraformed terrain
const std::string TEXTURE_BARREN = MAP_TEXTURE_PATH + "mars_dirt.png"; //barren dirt
const std::string TEXTURE_MIDDLE = MAP_TEXTURE_PATH + "middle_dirt.png"; //dead grass

//------------- Inventory Textures ------------------
const std::string SHOTGUN_INVENTORY_TEXTURE = "assets/texture/hud/inventoryItems/shotgun.png";
const std::string RIFLE_INVENTORY_TEXTURE = "assets/texture/hud/inventoryItems/assaultRifle.png";
const std::string HANDGUN_INVENTORY_TEXTURE = "assets/texture/hud/inventoryItems/pistol.png";
const std::string PLASMA_DEAGLE_INVENTORY_TEXTURE = "assets/texture/hud/inventoryItems/plasmaDeagle.png";
const std::string RAILGUN_INVENTORY_TEXTURE = "assets/texture/hud/inventoryItems/railgun.png";
const std::string RPG_INVENTORY_TEXTURE = "assets/texture/hud/inventoryItems/rpg.png";
const std::string TYPE_75K_INVENTORY_TEXTURE = "assets/texture/hud/inventoryItems/type75K.png";
const std::string KATANA_INVENTORY_TEXTURE = "assets/texture/hud/inventoryItems/katana.png";
const std::string PHASE_REPEATER_INVENTORY_TEXTURE = "assets/texture/hud/inventoryItems/phaseRepeater.png";

//------------- Turret Textures ------------------
const std::string TURRET_TEXTURE = "assets/texture/Building/turret.png";

//------------- Equipped Weapon Textures ------------------
const std::string SHOTGUN_EQUIPPED_TEXTURE = "assets/texture/hud/inventoryItems/shotgunEquipped.png";
const std::string RIFLE_EQUIPPED_TEXTURE = "assets/texture/hud/inventoryItems/assaultRifleEquipped.png";
const std::string HANDGUN_EQUIPPED_TEXTURE = "assets/texture/hud/inventoryItems/pistolEquipped.png";
const std::string PLASMA_DEAGLE_TEXTURE = "assets/texture/hud/inventoryItems/plasmaDeagleEquipped.png";
const std::string RAILGUN_TEXTURE = "assets/texture/hud/inventoryItems/railgunEquipped.png";
const std::string RPG_TEXTURE = "assets/texture/hud/inventoryItems/rpgEquipped.png";
const std::string TYPE_75K_TEXTURE = "assets/texture/hud/inventoryItems/type75KEquipped.png";
const std::string KATANA_TEXTURE = "assets/texture/hud/inventoryItems/katanaEquipped.png";
const std::string PHASE_REPEATER_TEXTURE = "assets/texture/hud/inventoryItems/phaseRepeaterEquipped.png";

//TODO: remove these textures, temporary for now
const std::string TEMP_MARINE_TEXTURE = "assets/texture/arrow.png";
const std::string TEMP_ZOMBIE_TEXTURE = "assets/texture/babyz1.png";

//Sprite Sheet folder path
const std::string SPRITE_PATH = "assets/texture/SpriteSheets/";

//-------- Map Objects Sprite Sheet --------
const std::string MAP_OBJECTS = SPRITE_PATH + "mapObjects.png";
const std::string MAP_OBJECT_BASE = SPRITE_PATH + "base.png";

//-------- Zombie Sprite Sheets --------
const std::string ZOMBIE_BABYZ = SPRITE_PATH + "babyz.png";
const std::string ZOMBIE_DIGGER = SPRITE_PATH + "digger.png";
const std::string ZOMBIE_BOSS = SPRITE_PATH + "zombieboss.png";

//-------- Marine Sprite Sheet --------
const std::string PLAYER_MOHAWK = SPRITE_PATH + "mohawk.png";
const std::string PLAYER_COWBOY = SPRITE_PATH + "cowboy.png";

//-------- Weapons Sprite Sheet --------
const std::string WEAPONS = SPRITE_PATH + "weapons.png";
const std::string LASER = SPRITE_PATH  + "laser.png";

const std::string REPLACE_ME = "assets/texture/replace_me.png"; //temporary sprite, will be removed later
const std::string RIFLE = "assets/texture/wall.png"; //temporary sprite, will be removed later

const std::string BLOOD_TEXTURE = "assets/texture/blood.png";

const std::string X_TEXTURE = "assets/texture/xmark.png";

const std::string CHECK_TEXTURE = "assets/texture/checkmark.png";

static constexpr int TEXTURE_SIZE = 250; //size of the texture
static constexpr int MARINE_SIZE = 100; //size of the marine
static constexpr int TOTAL_SPRITES = 45; //number of total sprites


class Renderer {
public:

        /**
         * DEVELOPER: Michael Goll
         * DESIGNER:  Michael Goll
         * DATE:      March 14, 2017
         *
         * REVISED: Isaac Morneau, March 25, 2017
         *      changed pointers and static to references
         *
         * returns the instance for rendering
         */
        static Renderer& instance() {
            return sInstance;
        }

        /**
         * DEVELOPER: Michael Goll
         * DESIGNER:  Michael Goll
         * DATE:      March 14, 2017
         * returns the sprite or sprite sheet that the object is looking to render
         */
        SDL_Texture *getTexture(int spriteType);

        /**
         * DEVELOPER: Michael Goll
         * DESIGNER: Michael Goll
         * DATE: March 14, 2017
         * Gets the rederer directly
         */
        SDL_Renderer *getRenderer() {
            return renderer;
        };

        /**
         * DEVELOPER: Michael Goll
         * DESIGNER: Michael Goll
         * DATE: March 14, 2017
         * Sets the window
         */
        void setWindow(SDL_Window *win);

        //
        /**
         * DEVELOPER: Michael Goll
         * DESIGNER: Michael Goll
         * DATE: March 14, 2017
         * Loads all the sprites specified in Renderer.h
         */
        void loadSprites();

        /**
         * DEVELOPER: Michael Goll
         * DESIGNER:  Michael Goll
         * DATE:      March 14, 2017
         *
         * REVISED: Isaac Morneau, March 25, 2017
         *      changed pointers and static to references
         *
         * Loads a font from a TTF file
         */
        TTF_Font *loadFont(const std::string& fonts, const int size);


        /**
         * DEVELOPER: Michael Goll
         * DESIGNER: Michael Goll
         * DATE: March 14, 2017
         * Creates a static text texture
         */
        void createText(const TEXTURES index, TTF_Font *font, const std::string& text, const SDL_Color& colour);

        /**
         * DEVELOPER: Michael Goll
         * DESIGNER: Michael Goll
         * DATE: March 14, 2017
         * Creates a temporary text texture
         */
        int createTempText(TTF_Font *font, const std::string& text, const SDL_Color& colour);

        /**
         * DEVELOPER: Michael Goll
         * DESIGNER:  Michael Goll
         * DATE:      March 20, 2017
         * creates a texture out of text, used for temporary texts (usernames, ect)
         * returns a 0 on error, otherwise returns the id where it is stored
         */
        int createTempTexture(const std::string& filePath);

        /**
         * DEVELOPER: Isaac Morneau
         * DESIGNER:  Isaac Morneau
         * DATE:      March 14, 2017
         * wraps the call using a texture to an int as
         * texture is a scoped enum and is no longer auto converted
         */
        void render(const SDL_Rect& dest, const TEXTURES spriteType, const double angle = 0.0,
                const SDL_Point *center = nullptr, const SDL_RendererFlip flip = SDL_FLIP_NONE);

        /**
         * DEVELOPER: Michael Goll
         * DESIGNER:  Michael Goll
         * DATE:      March 14, 2017
         * REVISION:  Isaac Morneau, March 26, 2017
         *      added duplicates to autowrap textures to ints
         * renders an object
         */
        void render(const SDL_Rect& dest, const int spriteType, const double angle = 0.0,
                const SDL_Point *center = nullptr, const SDL_RendererFlip flip = SDL_FLIP_NONE);

        /**
         * DEVELOPER: Michael Goll
         * DESIGNER: Michael Goll
         * DATE: March 14, 2017
         * Renders all of the sprites within the camera viewport
         * NOTES: used to render a sprite within a sprite sheet
         */
        void render(const SDL_Rect& dest, const int spriteType, const SDL_Rect& clip, const double angle = 0.0,
                const SDL_Point *center = nullptr, const SDL_RendererFlip flip = SDL_FLIP_NONE);

        /**
         * DEVELOPER: Isaac Morneau
         * DESIGNER:  Isaac Morneau
         * DATE:      March 14, 2017
         * wraps the call using a texture to an int as
         * texture is a scoped enum and is no longer auto converted
         */
        void render(const SDL_Rect& dest, const TEXTURES spriteType, const SDL_Rect& clip,
                const double angle = 0.0, const SDL_Point *center = nullptr,
                const SDL_RendererFlip flip = SDL_FLIP_NONE);

        /**
         * DEVELOPER: Michael Goll
         * DESIGNER: Michael Goll
         * DATE:      April 4, 2017
         * Renders the walls in a tiling fashion around the perimeters of blocking volumes and the
         * border of the map.
         * NOTES: Used to tile the walls around the map
         */
        void render(const SDL_Rect& dest, const TEXTURES spriteType, const SDL_Rect& clip,
                int w, int h);

        /**
         * DEVELOPER: Terry Kang
         * DESIGNER:  Terry Kang
         * DATE:      April 02, 2017
         * wraps the call using a texture to an int as
         * texture is a scoped enum and is no longer auto converted
         */
        void setAlpha(const TEXTURES spriteType, const int alpha);

        /**
         * DEVELOPER: Terry Kang
         * DESIGNER:  Terry Kang
         * DATE:      April 02, 2017
         * set alpha of sprite
         */
        void setAlpha(const int spriteType, const int alpha);


private:
        /**
         * DEVELOPER: Michael Goll
         * DESIGNER: Michael Goll
         * DATE: March 14, 2017
         * Creates the renderer if it does not already exist
         */
        Renderer(): tempIndex(1000) {}

        /**
         * DEVELOPER: Michael Goll
         * DESIGNER: Michael Goll
         * DATE: March 14, 2017
         * Releases resources used by the renderer.
         */
        ~Renderer();

        static Renderer sInstance;
        SDL_Renderer *renderer;
        SDL_Window *window;
        int tempIndex;

        //array of all sprites in the game
        std::map<int, SDL_Texture*> sprites;

        /**
         * DEVELOPER: Michael Goll
         * DESIGNER: Michael Goll
         * DATE: March 14, 2017
         * Creates a texture from a file and assigns it to the specified enum value.
         * NOTES: Used only for static sprites that are always loaded (character sprites, ect)
         */
        void createTexture(const TEXTURES index, const std::string& filePath);

        /**
         * DEVELOPER: Michael Goll
         * DESIGNER: Michael Goll
         * DATE: March 14, 2017
         * Creates a texture from a file and stores it to a temporary index value.
         * NOTES: Used for temporary textures that change (player names, ect)
         */
        void createTexture(const int index, const std::string& filePath);

        /**
         * DEVELOPER: Michael Goll
         * DESIGNER: Michael Goll
         * DATE: March 14, 2017
         * Sets the renderer
         */
        void setRenderer();
};

#endif
