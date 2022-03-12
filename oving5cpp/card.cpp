#include "std_lib_facilities.h"

#include "card.h"

string suitToString(Suit s) throw(){
    switch (s)
        {
            case Suit::clubs:   return "Clubs";
            case Suit::diamonds:   return "Diamonds";
            case Suit::hearts:      return "Hearts";
            case Suit::spades:      return "Spades";
            default: throw std::invalid_argument("Unimplemented item");
        }
}