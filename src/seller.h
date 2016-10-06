/*
 * seller.h
 *
 *  Created on: 1Oct.,2016
 *      Author: jasonrego
 */

#ifndef SELLER_H_
#define SELLER_H_

class Seller:public Trader
{
	static int counter;
public:
	Bid generateBid();
	~Seller(){}

};

int Seller::counter = 0;

Bid Seller::generateBid()
{
	float randomPrice = Trader::MIN_PRICE + static_cast<float>(rand())/(static_cast<float>(RAND_MAX/(Trader::MAX_PRICE-Trader::MIN_PRICE)));
	int randomQuantity = rand() % (Trader::MAX_QUANTITY - Trader::MIN_QUANTITY) + 1 + Trader::MIN_QUANTITY;
	Bid bid("Seller"+to_string(Seller::counter++),'A',randomPrice,randomQuantity);
	return bid;
}


#endif /* SELLER_H_ */
