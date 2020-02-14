#include"Source.h"

Player::Player(Player::PlayerType t): m_currentPlayer(t){}

Fighter::Fighter(PlayerType t, int strength):Player(t),m_strength(strength){
    cout << "Fighter Created" << endl;
}

void Fighter::UseWeapon(Weapon* armed)
{
    armed->Fire();
}
//

Player* FighterWithAk47::CreatePlayer()
{
    return new Fighter(Player::fighter,100) ;
}

Weapon* FighterWithAk47::CreateWeapon()
{
    return new AK47(100, 100);
}

AK47::AK47(int power, int capacity) : Weapon(100), m_power(100){
    cout << "AK47 is created" << endl;
}

int main() 
{
    GameManager* gm = new GameManager(new FighterWithAk47());
    gm->Play();
    return 1;
}

void GameManager::Play()
{
    m_player->UseWeapon(m_weapon);
}

GameManager::~GameManager()
{
    delete m_player;
    delete m_weapon;
    delete m_gameElementFactory;
}
