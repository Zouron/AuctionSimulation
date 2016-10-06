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
	priority_queue<Bid> buyBids;
	priority_queue<Bid> sellBids;
public:
	Auctioneer(vector<Buyer>&,vector<Seller>&);
	void listBuyers();
	void listSellers();
};

Auctioneer::Auctioneer(vector<Buyer>& buyers,vector<Seller>& sellers)
{
	for(int i=0; i<buyers.size(); i++)
	{
		buyBids.push(buyers[i].getBid());
		sellBids.push(sellers[i].getBid());
	}
}

void Auctioneer::listSellers()
{
	while(!sellBids.empty())
	{
		cout<<sellBids.top();
		sellBids.pop();
	}
}

void Auctioneer::listBuyers()
{
	while(!buyBids.empty())
	{
		cout<<buyBids.top();
		buyBids.pop();
	}
}


#endif /* AUCTIONEER_H_ */
