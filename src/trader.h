/*
 * trader.h
 *
 *  Created on: 1Oct.,2016
 *      Author: jasonrego
 */

#ifndef TRADER_H_
#define TRADER_H_

class Trader
{
protected:
	string traderName;
	char traderType;
	const int MIN_Price = 55;
	const int MAX_Price = 200;
	const int MAX_QUANTITY = 200;
	const int MIN_QUANTITY = 50;

public:
	virtual Bid generateBid()=0;
	virtual ~Trader();

};


#endif /* TRADER_H_ */
