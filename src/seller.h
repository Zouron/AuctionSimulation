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
private:
	Bid bid;
public:
	Seller();
	Bid getBid();
	~Seller(){}

};
Bid Seller::getBid()
{
	return bid;
}

Seller::Seller()
{
	traderName= "Seller" + to_string(Seller::counter++);
	traderType = 'A';
	bid = generateBid();
}
int Seller::counter = 0;


#endif /* SELLER_H_ */
