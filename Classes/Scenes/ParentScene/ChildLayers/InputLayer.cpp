#include "InputLayer.h"
#include "SimpleAudioEngine.h"

#include "ParentScene.h"

using namespace cocos2d;
using namespace CocosDenshion;

bool Input::init()
{
    if (!CCLayer::init())
    {
        return false;
    }
    
    this->setTouchEnabled(true);
    
    return true;
}

void Input::ccTouchesBegan(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent)
{
    ((Parent*)parent)->displayLayer->pLabel->setString("Input Layer Modified");
}