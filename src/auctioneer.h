/*
 * auctioneer.h
 *
 *  Created on: 6Oct.,2016
 *      Author: jasonrego
 */

#ifndef AUCTIONEER_H_
#define AUCTIONEER_H_

class Auctioneer
{
private:
	priority_queue<Bid> buyingBids;
	priority_queue<Bid> sellingBids;
	vector<Match> matchedBids;
	vector<Bid> unMatchedBids;
	void addToMatch(Bid,Bid);
public:
	Auctioneer(vector<Buyer>&,vector<Seller>&);
	Auctioneer(){}
	void listBuyers(ofstream&);
	void listSellers(ofstream&);
	void makeTrades();
	void listMatches(ofstream&);
	void listUnmatchedBids(ofstream&);
};

void Auctioneer::listMatches(ofstream &fOut)
{
	for(int i=0; i< matchedBids.size(); i++)
	{
		matchedBids[i].displayMatch(fOut);
	}
}

void Auctioneer::listUnmatchedBids(ofstream &fOut)
{
	for(int i=0; i< unMatchedBids.size(); i++)
	{
		fOut<<unMatchedBids[i]<<endl;
	}
}

void Auctioneer::makeTrades()
{
	while (!sellingBids.empty() && !buyingBids.empty())
	{
		Bid tempSellBid = sellingBids.top();
		Bid tempBuyBid = buyingBids.top();
		if(tempSellBid.getPrice() <= tempBuyBid.getPrice())
		{
			addToMatch(tempBuyBid, tempSellBid);
		}
		else
		{
			unMatchedBids.push_back(tempBuyBid);
			buyingBids.pop();
		}
	}

	while (!sellingBids.empty())
	{
		unMatchedBids.push_back(sellingBids.top());
		sellingBids.pop();
	}
}

void Auctioneer::addToMatch(Bid buyBid, Bid sellBid)
{
	int quantityDifference = sellBid.getQuantity() - buyBid.getQuantity();
	Match tempMatch;
	if(quantityDifference < 0)
	{
		buyBid.setQuantity(sellBid.getQuantity());
		tempMatch.setMatch(buyBid,sellBid);
		matchedBids.push_back(tempMatch);
		buyBid.setQuantity(-quantityDifference);
		buyingBids.pop();
		buyingBids.push(buyBid);
		sellingBids.pop();
	}
	else if(quantityDifference > 0)
	{
		sellBid.setQuantity(buyBid.getQuantity());
		tempMatch.setMatch(buyBid, sellBid);
		matchedBids.push_back(tempMatch);
		sellBid.setQuantity(quantityDifference);
		sellingBids.pop();
		sellingBids.push(sellBid);
		buyingBids.pop();
	}
	else
	{
		tempMatch.setMatch(buyBid,sellBid);
		matchedBids.push_back(tempMatch);
		sellingBids.pop();
		buyingBids.pop();
	}

}

Auctioneer::Auctioneer(vector<Buyer>& buyers,vector<Seller>& sellers)
{
	for(int i=0; i<buyers.size(); i++)
	{
		buyingBids.push(buyers[i].getBid());
		sellingBids.push(sellers[i].getBid());
	}
}

void Auctioneer::listSellers(ofstream &fOut)
{
	priority_queue<Bid> tempQueue = sellingBids;
	while(!tempQueue.empty())
	{
		fOut<<tempQueue.top()<<endl;
		tempQueue.pop();
	}
}

void Auctioneer::listBuyers(ofstream &fOut)
{
	priority_queue<Bid> tempQueue = buyingBids;
		while(!tempQueue.empty())
		{
			fOut<<tempQueue.top()<<endl;
			tempQueue.pop();
		}
}


#endif /* AUCTIONEER_H_ */
