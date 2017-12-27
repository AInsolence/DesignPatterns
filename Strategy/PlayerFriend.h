#pragma once
#include "TalkingBehaviour.h"

class PlayerFriend :
	public TalkingBehaviour
{
public:
	PlayerFriend();
	~PlayerFriend();

	void Act();
};

