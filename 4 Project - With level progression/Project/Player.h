#pragma once
#include "PlacableActor.h"

class Key;
class Shield;

class Player : public PlacableActor
{
public:
	Player();

	bool HasKey();
	bool HasKey(ActorColor color);
	void PickupKey(Key* key);
	void UseKey();
	void DropKey();
	Key* GetKey() { return m_pCurrentKey; }

	void PickupShield();
	void UseShield() { m_shieldCount -= 1; }
	int GetShields() { return m_shieldCount;  }

	bool IsConfused() { return m_confused; }
	void SetConfused(bool state);
	int ConfusionTurns() { return m_confusedTurns; }
	void DecrementConfusion() { m_confusedTurns--; }

	void AddMoney(int money) { m_money += money; }
	int GetMoney() { return m_money; }

	int GetLives() { return m_lives; }
	void DecrementLives() { m_lives--; }

	virtual ActorType GetType() override { return ActorType::Player; }
	virtual void Draw() override;
private:
	Key* m_pCurrentKey;
	int m_shieldCount;
	int m_money;
	int m_lives;
	bool m_confused;
	int m_confusedTurns;
};
