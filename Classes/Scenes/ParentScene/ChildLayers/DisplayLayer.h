#ifndef __DISPLAY_LAYER_H__
#define __DISPLAY_LAYER_H__

#include "cocos2d.h"
class Parent;

class Display : public cocos2d::CCLayer
{
public:
    virtual bool init();
    CREATE_PARENT_FUNC(Display, Parent);

    cocos2d::CCLabelTTF* pLabel;
};

#endif // __DISPLAY_LAYER_H__
