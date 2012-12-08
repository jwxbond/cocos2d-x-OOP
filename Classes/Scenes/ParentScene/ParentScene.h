#ifndef __PARENT_SCENE_H__
#define __PARENT_SCENE_H__

#include "cocos2d.h"
#include "DisplayLayer.h"
#include "InputLayer.h"

class Parent : public cocos2d::CCScene
{
public:
    virtual bool init();
    static cocos2d::CCScene* scene();
    CREATE_FUNC(Parent);
    
    Display* displayLayer;
};

#endif // __PARENT_SCENE_H__