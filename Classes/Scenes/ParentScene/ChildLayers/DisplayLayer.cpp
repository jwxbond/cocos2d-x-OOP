#include "DisplayLayer.h"
#include "SimpleAudioEngine.h"

using namespace cocos2d;
using namespace CocosDenshion;

bool Display::init()
{
    if (!CCLayer::init())
    {
        return false;
    }
    
    CCSize size = CCDirector::sharedDirector()->getWinSize();
    
    pLabel = CCLabelTTF::create("Display Layer Set", "Thonburi", 34);
    pLabel->setPosition(ccp(size.width / 2, size.height / 2));
    this->addChild(pLabel);
        
    return true;
}