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
public:
	Bid generateBid();
	~Seller(){}

};

Bid Seller::generateBid()
{
	Bid bid("Jason",'S',44.33,12);
	return bid;
}


#endif /* SELLER_H_ */
