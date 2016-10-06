/*
 * driver.cpp
 *
 *  Created on: 30Sep.,2016
 *      Author: jasonrego
 */

#include<iostream>
#include<string>
#include<ctime>
using namespace std;
#include "bid.h"
#include "trader.h"
#include "buyer.h"
#include "seller.h"
#include<vector>

//int Trader::MIN_PRICE = 50;
const int NUM_SELLER = 10;
const int NUM_BUYER = 10;
int main()
{
	srand(time(NULL));
	vector<Seller> bailey(NUM_SELLER);
	vector<Buyer> jason(NUM_BUYER);
	cout<<"bids:"<<Bid::bidCounter<<endl;
	//Seller khush[5];
	//for(int i=0;i<5;i++)
		//cout<<jason[i].getBid();
	for(int i=0;i<NUM_SELLER;i++)
		cout<<bailey[i].getBid();
	for(int i=0;i<NUM_BUYER;i++)
		cout<<jason[i].getBid();



	return 0;
}


