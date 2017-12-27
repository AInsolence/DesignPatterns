#pragma once
#include "TalkingBehaviour.h"
class CanNotTalk :
	public TalkingBehaviour
{
public:
	CanNotTalk();
	~CanNotTalk();

	void Act();
};

