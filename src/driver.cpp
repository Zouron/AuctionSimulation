/*
 * driver.cpp
 *
 *  Created on: 30Sep.,2016
 *      Author: jasonrego
 */

#include<iostream>
#include<string>
#include<ctime>
//#include<vector>
using namespace std;
#include "bid.h"
#include "trader.h"
#include "buyer.h"
#include "seller.h"
#include "match.h"
#include <vector>
#include<queue>
#include "auctioneer.h"

//int Trader::MIN_PRICE = 50;
const int NUM_SELLER = 10;
const int NUM_BUYER = 10;
int main()
{
	srand(time(NULL));
	vector<Seller> bailey(NUM_SELLER);
	vector<Buyer> jason(NUM_BUYER);


	Auctioneer auctioneer(jason,bailey);
	cout<<"Buyers:"<<endl;
	auctioneer.listBuyers();
	cout<<"Sellers:"<<endl;
	auctioneer.listSellers();
	auctioneer.makeTrades();



	return 0;
}


