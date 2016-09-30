/*
 * bid.h
 *
 *  Created on: 30Sep.,2016
 *      Author: jasonrego
 */

#ifndef BID_H_
#define BID_H_

class Bid
{
	static int bidCounter=100;
private:
	string traderName;
	int bidId;
	char bidType;
	double bidPrice;
	int bidQuantity;
public:
	Bid(string,char,double,int);
	string getName(){return traderName;};
	int getId(){return bidId;};
	char getType(){return bidType;};
	double getPrice(){return bidPrice;};
	int getQuantity(){return bidQuantity;};
};

Bid::Bid(string name,char type, double price, int quantity)
{
	traderName = name;
	bidType = type;
	bidPrice = price;
	bidQuantity = quantity;
	bidId = bidCounter++;
}



#endif /* BID_H_ */
