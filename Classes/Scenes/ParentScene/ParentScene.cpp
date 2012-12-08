#include "ParentScene.h"
#include "SimpleAudioEngine.h"

using namespace cocos2d;
using namespace CocosDenshion;

CCScene* Parent::scene()
{
    CCScene *scene = CCScene::create();    
    Parent *layer = Parent::create();
    scene->addChild(layer);
    return scene;
}

bool Parent::init()
{
    if (!CCScene::init())
    {
        return false;
    }
    
    CCSize size = CCDirector::sharedDirector()->getWinSize();
    
    displayLayer = (Display*)displayLayer->createWithParent(this);
    this->addChild(displayLayer);
    
    Input* inputLayer = (Input*)inputLayer->createWithParent(this);
    this->addChild(inputLayer);
    
    return true;
}