//
//  Collision.h
//  Run
//
//  Created by neworigin on 15-11-27.
//
//

#ifndef __Run__Collision__
#define __Run__Collision__

#include <iostream>
#include "cocos2d.h"
using namespace std;
using namespace cocos2d;
class Collision
{
public:
    static bool isCollision(Sprite*sp1,Sprite*sp2);
    static bool iscollision2(Sprite*sp1,Sprite*sp2);
};
#endif /* defined(__Run__Collision__) */
