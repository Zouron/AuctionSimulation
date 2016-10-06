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
	static const float MIN_PRICE;
	static const float MAX_PRICE;
	static const int MAX_QUANTITY;
	static const int MIN_QUANTITY;

protected:
	string traderName;
	char traderType;


public:
	//Trader(){};
	virtual Bid generateBid()=0;
	virtual ~Trader(){}

};

const float Trader::MIN_PRICE = 50;
const float Trader::MAX_PRICE = 150;
const int Trader::MAX_QUANTITY = 50;
const int Trader::MIN_QUANTITY = 1;
#endif /* TRADER_H_ */
