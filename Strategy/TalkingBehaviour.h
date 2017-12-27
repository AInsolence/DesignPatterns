/*
	Base class for all actor talking abilities
*/
#pragma once
#include <iostream>

class TalkingBehaviour
{
public:
	TalkingBehaviour();
	virtual ~TalkingBehaviour();

	virtual void Act() = 0;
};

