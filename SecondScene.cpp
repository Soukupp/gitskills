#include"SecondScene.h"

Scene* SecondScene::createScene()
{
	auto scene = Scene::create();
	auto layer = SecondScene::create();
	scene->addChild(layer);
	return scene;
}

bool SecondScene::init()
{
	Label* label = Label::create("Hi, I am handsome!", "Arial", 40);
	label->setPosition(ccp(300, 200));
	this->addChild(label);

	return true;
}