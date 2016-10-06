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
	queue<Bid> buyBids;
	queue<Bid> sellBids;
public:
	Auctioneer(vector<Buyer>&,vector<Seller>&);
	void listItems();
};

Auctioneer::Auctioneer(vector<Buyer>& buyers,vector<Seller>& sellers)
{
	for(int i=0; i<buyers.size(); i++)
	{
		buyBids.push(buyers[i].getBid());
		sellBids.push(sellers[i].getBid());
	}
}

void Auctioneer::listItems()
{
	while(!buyBids.empty())
	{
		cout<<buyBids.pop()<<endl;
	}
}


#endif /* AUCTIONEER_H_ */
