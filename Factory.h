////Templates Code Sample
#include <iostream>
using namespace std;

class Weapon {
    int m_capacity;
public:
    Weapon(int ammo):m_capacity(ammo){}
    virtual void Fire() = 0;
};

class AK47 : public Weapon
{
    int m_power;
public:
    AK47(int power,int capacity);
    void Fire() {
        cout << "AK47 in action";
    }
};

 class  Player {
 public:
     enum PlayerType {
         fighter = 1 << 0,
         flameThrower = 1 << 1,
         sharpShooter = 1 << 2,
         BombDiffuser = 1 << 3
     };
private:
     PlayerType m_currentPlayer;
public:
    Player(PlayerType t);
    virtual void UseWeapon(Weapon*) = 0;
};

class Fighter : public Player
{
    int m_strength;
public:
    Fighter(PlayerType t, int strength);
    void UseWeapon(Weapon* armed);
};
//Abstract Factory Class for GameObjects Creation.
class GameElementFactory
{
public:
    virtual Player* CreatePlayer() = 0;
    virtual Weapon* CreateWeapon() = 0;
};

class FighterWithAk47 : public GameElementFactory {
    Player* CreatePlayer();
    Weapon* CreateWeapon();
};


class GameManager
{
    Player* m_player;
    GameElementFactory* m_gameElementFactory;
    Weapon* m_weapon;
public:

    GameManager(GameElementFactory* gf):m_weapon(gf->CreateWeapon()),m_gameElementFactory(gf),m_player(gf->CreatePlayer()){}
    void Play();
    ~GameManager();
        
    
};

