#pragma once
#include "cocos2d.h"
using namespace cocos2d;

class SecondScene : public Layer {

public:
	static Scene* createScene();
	virtual bool init();
	CREATE_FUNC(SecondScene);
};