#pragma once
#include <iostream>

class DVDPlayer
{
public:
	DVDPlayer();
	~DVDPlayer();

	void SetCD() const;
	void StartPlay() const;
	void Eject() const;
	void PowerOff() const;
};

