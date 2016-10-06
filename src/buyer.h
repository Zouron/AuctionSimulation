/*
 * buyer.h
 *
 *  Created on: 1Oct.,2016
 *      Author: jasonrego
 */

#ifndef BUYER_H_
#define BUYER_H_

class Buyer: public Trader
{
	static int counter;
private:
	Bid bid;
public:
	Buyer();
	Bid getBid();
	~Buyer(){}

};

int Buyer::counter = 0;
Buyer::Buyer()
{
	traderName="Buyer"+ to_string(Buyer::counter++);
	traderType='B';
	bid = generateBid();
}
Bid Buyer::getBid()
{
	return bid;
}


#endif /* BUYER_H_ */
