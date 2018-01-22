#include "DVDPlayer.h"



DVDPlayer::DVDPlayer()
{
}


DVDPlayer::~DVDPlayer()
{
}

void DVDPlayer::SetCD() const
{
	std::cout << "Setting CD disk..." << std::endl;
}

void DVDPlayer::StartPlay() const
{
	std::cout << "Start playing CD..." << std::endl;
}

void DVDPlayer::Eject() const
{
	std::cout << "Eject CD..." << std::endl;
}

void DVDPlayer::PowerOff() const
{
	std::cout << "Off DVD power suply..." << std::endl;
}
