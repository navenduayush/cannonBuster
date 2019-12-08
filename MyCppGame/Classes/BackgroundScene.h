//
// Created by Navendu Ayush on 08/12/19.
//

#ifndef TEMPLATECPP_BACKGROUNDSCENE_H
#define TEMPLATECPP_BACKGROUNDSCENE_H

#include "cocos2d.h"

class BackgroundScene : public cocos2d::Scene {
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);

    // implement the "static create()" method manually
    CREATE_FUNC(BackgroundScene);
};


#endif //TEMPLATECPP_BACKGROUNDSCENE_H
