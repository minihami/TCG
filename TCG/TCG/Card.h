#pragma once
#include <cstdint>
#include <string>
using namespace std;

enum class CardType {
	NonType,
	Creature,
	Spell
};
enum class CardID{
	Knight = 1,
	Vampire,
	Drake,
	Serpent,
	Tiger,
	Shock = 100,
	Enhence
};

class Card {
public: 
	Card(const CardID ID);

public:
	static inline CardType CheckCardTypeByID(const CardID CheckID) { return CheckID < CardID::Shock ? CardType::Creature : CardType::Spell; }
	inline bool GetValieValue(void) const { return ValidCheck; }

private: 
	virtual void SetCardDataByID(const CardID ID); 
private:
	const CardID ID;
	string Name;
	int64_t Cost;
public:
	bool ValidCheck;
};

class CreatureCard :Card {
public: 
	CreatureCard(const CardID ID);
	bool inline CheckDestructed(void) const { return (Life <= 0) ? true : false; }
	static CreatureCard CreateCreatureCard(const CardID InputID) { return CreatureCard(InputID); }
private:
	virtual void SetCardDataByID(const CardID ID); 
private:
	CardType Type;
	int64_t Power;
	int64_t Life;
	int64_t FieldID;
};
class SpellCard :Card {
private:
	CardType Type;

};
