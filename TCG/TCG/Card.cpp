#include "Card.h"

Card::Card(const CardID InputID) : ID(InputID), Name(""), Cost(-1), ValidCheck(false)
{
	SetCardDataByID(ID);
}


void Card::SetCardDataByID(const CardID ID)
{
	switch (ID) {
	case CardID::Knight:
		Name = "Knight";
		Cost = 2;
		break;
	case CardID::Vampire:
		Name = "Vampire";
		Cost = 2;
		break;
	case CardID::Drake:
		Name = "Drake";
		Cost = 5;
		break;
	case CardID::Serpent:
		Name = "Serpent";
		Cost = 3;
		break;
	case CardID::Tiger:
		Name = "Tiger";
		Cost = 4;
		break;
	case CardID::Shock:
		Name = "Shock";
		Cost = 2;
		break;
	case CardID::Enhence:
		Name = "Enhence";
		Cost = 1;
		break;
	default:
		fprintf(stderr, "Card ID doesn't exist\n");
		ValidCheck = false;
		break;
	}
	ValidCheck = true;
} 

CreatureCard::CreatureCard(const CardID ID) : Card(ID), Type(CardType::Creature), Power(-1), Life(-1), FieldID(-1)
{
	SetCardDataByID(ID);
}

void CreatureCard::SetCardDataByID(const CardID ID)
{
	switch (ID) {
	case CardID::Knight:
		Type = CardType::Creature;
		Power = 2;
		Life = 2;
		break;
	case CardID::Vampire:
		Type = CardType::Creature;
		Power = 3;
		Life = 1;
		break;
	case CardID::Drake:
		Type = CardType::Creature;
		Power = 4;
		Life = 4;
		break;
	case CardID::Serpent:
		Type = CardType::Creature;
		Power = 3;
		Life = 2;
		break;
	case CardID::Tiger:
		Type = CardType::Creature;
		Power = 4;
		Life = 3;
		break;
	default:
		fprintf(stderr, "Not Creature Type Card ID\n");
		ValidCheck = false;
		break;
	}
	ValidCheck = true;
} 
