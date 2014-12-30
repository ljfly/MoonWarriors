#ifndef __MoonWarriorsx__Bullet__
#define __MoonWarriorsx__Bullet__

#include "cocos2d.h"
#include "UnitSprite.h"
USING_NS_CC;

class Bullet:public UnitSprite {
private:
float m_velocityx;
float m_velocityy;
int m_power;
int m_Hp;
int m_attackMode;
int m_parentType;
public:
Bullet();
//~Bullet();
Bullet(int speed, const char *weapon, int attactMode);
bool m_active;
int m_zorder;
void init(float velocityx, float velocityy,int power, int hp,int attackMode,int stateMode);
void setStateMode(int stateMode);
void setPower(int stateMode);
void setHp(int hp);
virtual bool init();
virtual void update(float dt);
virtual void hurt();
virtual void destroy();
virtual CCRect collideRect();
virtual bool isActive();

void removeExplode(CCNode *pSender);


CREATE_FUNC(Bullet);
};

#endif