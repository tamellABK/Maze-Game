#pragma once
#include "PlacableActor.h"
class ConfusionTrap : public PlacableActor
{
public:
	ConfusionTrap(int x, int y)
		: PlacableActor(x, y)
		, m_Sprung(false)
	{

	}

	virtual ActorType GetType() override { return ActorType::ConfusionTrap; }
	virtual void Draw() override;

	void SpringTrap();

private:
	bool m_Sprung;
};

