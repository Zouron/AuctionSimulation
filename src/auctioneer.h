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
	vector<Match> unMatchedBids;
	void addToMatch(Bid,Bid);
public:
	Auctioneer(vector<Buyer>&,vector<Seller>&);
	void listBuyers();
	void listSellers();
	void makeTrades();
	void listMatches();
	void listUnmatchedBids();
};

void Auctioneer::listMatches()
{
	for(int i=0; i< matchedBids.size(); i++)
	{
		cout<<matchedBids[i];
	}
}

void Auctioneer::listUnmatchedBids()
{
	for(int i=0; i< unMatchedBids.size(); i++)
	{
		cout<<unMatchedBids[i];
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
			addToMatch(tempSellBid, tempBuyBid);
		}
		else
			buyingBids.pop();
	}
}

void Auctioneer::addToMatch(Bid buyBid, Bid sellBid)
{
	int quantityDifference = sellBid.getPrice() - buyBid.getPrice();
	Match tempMatch;
	if(quantityDifference < 0)
	{
		buyBid.setQuantity(sellBid.getQuantity());
		tempMatch(buyBid,sellBid);
		matchedBids.push_back(tempMatch);
		buyBid.setQuantity(-quantityDifference);
		buyingBids.pop();
		buyingBids.push(buyBid);
		sellingBids.pop();
	}
	else if(quantityDifference > 0)
	{
		sellBid.setQuantity(buyBid.getQuantity());
		tempMatch(buyBid, sellBid);
		matchedBids.push_back(tempMatch);
		sellBid.setQuantity(quantityDifference);
		sellingBids.pop();
		sellingBids.push(sellBid);
		buyingBids.pop();
	}
	else
	{
		tempMatch(buyBid,sellBid);
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

void Auctioneer::listSellers()
{
	while(!sellingBids.empty())
	{
		cout<<sellingBids.top()<<endl;
		sellingBids.pop();
	}
}

void Auctioneer::listBuyers()
{
	while(!buyingBids.empty())
	{
		cout<<buyingBids.top()<<endl;;
		buyingBids.pop();
	}
}


#endif /* AUCTIONEER_H_ */
