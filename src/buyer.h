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
public:
	Bid generateBid();
	~Buyer(){}


};

Bid Buyer::generateBid()
{
	Bid bid("jason",'B',32.44,20);
	return bid;


}


//Buyer::~Buyer()
//{
//	cout<<"";
//
//}



#endif /* BUYER_H_ */
