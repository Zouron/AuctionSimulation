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
public:
	Bid generateBid();
	~Buyer(){}


};

int Buyer::counter = 0;

Bid Buyer::generateBid()
{
	//srand(time(NULL));
	float randomPrice = Trader::MIN_PRICE + static_cast<float>(rand())/(static_cast<float>(RAND_MAX/(Trader::MAX_PRICE-Trader::MIN_PRICE)));
	int randomQuantity = rand() % (Trader::MAX_QUANTITY - Trader::MIN_QUANTITY) + 1 + Trader::MIN_QUANTITY;
	Bid bid("Buyer"+to_string(Buyer::counter++),'B',randomPrice,randomQuantity);
	return bid;


}


//Buyer::~Buyer()
//{
//	cout<<"";
//
//}



#endif /* BUYER_H_ */
