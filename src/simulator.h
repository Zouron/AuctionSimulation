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
private:
	vector<Seller> sellers;
	vector<Buyer> buyers;
	Auctioneer auctioneer;
public:
	void openMarket();
	Simulator();

};

Simulator::Simulator()
{
	srand(time(NULL));
	vector<Buyer> b(10);
	vector<Seller> s(10);
	sellers = s;
	buyers = b;
	Auctioneer auctioneer2(buyers,sellers);
	auctioneer = auctioneer2;
}


void Simulator::openMarket()
{
	srand(time(NULL));
	cout<<"Buyers:"<<endl;
	//auctioneer(buyers,sellers);
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
