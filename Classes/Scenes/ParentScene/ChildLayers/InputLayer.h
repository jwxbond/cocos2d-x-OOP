#ifndef __INPUT_LAYER_H__
#define __INPUT_LAYER_H__

#include "cocos2d.h"
class Parent;

class Input : public cocos2d::CCLayer
{
public:
    virtual bool init();
    CREATE_PARENT_FUNC(Input, Parent);

    virtual void ccTouchesBegan(cocos2d::CCSet* pTouches, cocos2d::CCEvent* pEvent);
};

#endif // __INPUT_LAYER_H__
