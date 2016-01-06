//
//  Collision.cpp
//  Run
//
//  Created by neworigin on 15-11-27.
//
//

#include "Collision.h"
#include <stdlib.h>
#include <math.h>
#include "cocos2d.h"
static bool isCollision(Sprite*sp1,Sprite*sp2)
{
    //利用boundingBox函数来实现碰撞检测
    if(sp1->boundingBox().intersectsRect(sp2->boundingBox()))
    {
        return true;
    }
    return false;
    
    //    //自定义碰撞
    //    CCPoint p1 = sp1->getPosition();
    //    CCPoint p2 = sp2->getPosition();
    //    CCSize p1s = sp1->boundingBox().size;
    //    CCSize p2s = sp2->boundingBox().size;
    //
    //    //根据坐标和精灵大小来检测碰撞
    //    if ((fabs(p1.x-p2.x) <= (p1s.width/2 + p2s.width/2-10)) && (fabs(p1.y-p2.y) <= (p1s.height/2 + p2s.height/2-10))) {
    //        return true;
    //
    //    }
    //    return false;
}
// static bool iscollision2(Sprite*sp1,Sprite*sp2)
// {
//     //自定义碰撞
//     Point p1=sp1->getPosition();
//     Point p2=sp2->getPosition();
//     Size p1s=sp1->boundingBox().size;
//     Size p2s=sp2->boundingBox().size;
//     //根据坐标和精灵大小来检测碰撞
//     if((fabs(p1.x-p2.x)<=(p1s.width/2+p2s.width/2-20))&&(fabs(p1.y-p2.y)<=(p1s.height/2+p2s.height/2-20)))
//     {
//         return true;
//     }
//     return false;
// }
