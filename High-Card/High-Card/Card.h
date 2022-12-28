// Cards - foundation for card game
// Card definition - playing card

#ifndef CARD_H
#define CARD_H

class Card
{
public:
	enum rank {
		ACE, TWO, THREE, FOUR,
		FIVE, SIX, SEVEN, EIGHT,
		NINE, TEN, JACK, QUEEN, KING
	};
	enum suit { CLUBS, DIAMONDS, HEARTS, SPADES };
	Card(rank r = ACE, suit s = SPADES);
	rank GetRank() const;
	suit GetSuit() const;
	void Display() const;

protected:
	rank m_Rank;
	suit m_Suit;
};
#endif