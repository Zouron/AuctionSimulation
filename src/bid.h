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
private:
	string traderName;
	int bidId;
	char bidType;
	double price;
	int quantity;
public:
	Bid();
	string getName(){return traderName;};
	int getId(){return bidId;};
	char getType(){return bidType;};
	double getPrice(){return price;};
	int getQuantity(){return quantity;};
};



#endif /* BID_H_ */
