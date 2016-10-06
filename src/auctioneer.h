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
	vector<Match> matchedBids;
public:
	Auctioneer(vector<Buyer>&,vector<Seller>&);
	void listBuyers();
	void listSellers();
	void makeTrades();
};

void Auctioneer::makeTrades()
{

}

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
		cout<<sellBids.top()<<endl;
		sellBids.pop();
	}
}

void Auctioneer::listBuyers()
{
	while(!buyBids.empty())
	{
		cout<<buyBids.top()<<endl;;
		buyBids.pop();
	}
}


#endif /* AUCTIONEER_H_ */
