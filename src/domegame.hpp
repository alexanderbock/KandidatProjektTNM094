#include "./Player.hpp"
#include "./Weapon.hpp"
#include "./Projectile.hpp"
#include "./Scene.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <vector>

#ifndef DOMEGAME
#define DOMEGAME

class DomeGame{
public:
    // Constructor
    DomeGame(sgct::Engine * gEngine);
    
    void init();
    void render() const;
    void addPlayer(std::string &name);
	void update(float dt);
    
    size_t textureHandle;
    Scene * myScene;
	
	sgct::SharedVector<Player> added_players;
	sgct::SharedVector<Projectile> added_projectiles;
	sgct::SharedVector<int> removed_projectiles;

    std::vector<Player*> players;
    std::vector<Projectile*> * projectiles = nullptr;

	glm::mat4 MVP;
    
private:
	const float DOME_RADIUS = 7.4f;

	GLint MVP_loc = -1;
	GLint TEX_loc = -1;
};

#endif // DOMEGAME
