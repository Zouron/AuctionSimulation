/*
 * simulator.h
 *
 *  Created on: 8Oct.,2016
 *      Author: jasonrego
 */

#ifndef SIMULATOR_H_
#define SIMULATOR_H_
const int NUM_Seller = 10;
const int NUM_Buyer = 10;
class Simulator
{
	vector<Seller> sellers(NUM_Seller);
	vector<Buyer> buyers(NUM_Buyer);
	Auctioneer auctioneer;
public:
	void openMarket();

};

void Simulator::openMarket()
{
	srand(time(NULL));
	cout<<"Buyers:"<<endl;
	auctioneer(buyers,sellers);
	cout<<"Buyers:"<<endl;
	auctioneer.listBuyers();

	cout<<endl<<"Sellers:"<<endl;
	auctioneer.listSellers();

	auctioneer.makeTrades();

	cout<<endl<<"Matched bids:"<<endl;
	auctioneer.listMatches();

	cout<<"Un-Matched bids"<<endl;
	auctioneer.listUnmatchedBids();

}



#endif /* SIMULATOR_H_ */
