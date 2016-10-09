/*
 * simulator.h
 *
 *  Created on: 8Oct.,2016
 *      Author: jasonrego
 */

#ifndef SIMULATOR_H_
#define SIMULATOR_H_

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
	vector<Buyer> b(NUM_SELLER);
	vector<Seller> s(NUM_BUYER);
	sellers = s;
	buyers = b;
	Auctioneer auctioneer2(buyers,sellers);
	auctioneer = auctioneer2;
}


void Simulator::openMarket()
{
	ofstream fileOut;
	fileOut.open("result.txt");


	fileOut<<"Buyers:"<<endl;
	auctioneer.listBuyers(fileOut);

	fileOut<<endl<<"Sellers:"<<endl;
	auctioneer.listSellers(fileOut);

	auctioneer.makeTrades();

	fileOut<<endl<<"Matched bids:"<<endl;
	auctioneer.listMatches(fileOut);

	fileOut<<endl<<"Un-Matched bids:"<<endl;
	auctioneer.listUnmatchedBids(fileOut);

	fileOut.close();

}



#endif /* SIMULATOR_H_ */
