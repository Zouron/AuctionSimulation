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
	friend ostream &operator<<(ostream &, const Bid &);

private:
	string traderName;
	int bidId;
	char bidType;
	float bidPrice;
	int bidQuantity;
public:
	static int bidCounter;
	Bid();
	Bid(string,char,double,int);
	string getName(){return traderName;};
	int getId(){return bidId;};
	char getType(){return bidType;};
	double getPrice(){return bidPrice;};
	int getQuantity(){return bidQuantity;};
};
int Bid::bidCounter=100;
Bid::Bid(string name,char type, double price, int quantity)
{
	traderName = name;
	bidType = type;
	bidPrice = price;
	bidQuantity = quantity;
	bidId = Bid::bidCounter++;
}
Bid::Bid()
{
	traderName="";
	bidId=0;
	bidType=0;
	bidPrice=0;
	bidQuantity=0;
}

ostream &operator<<(ostream &output, const Bid &b)
{
	output<<b.traderName<<" "<<b.bidId<<" "<<b.bidType<<" "<<b.bidPrice<<" "<<b.bidQuantity<<endl;
	return output;
}



#endif /* BID_H_ */
