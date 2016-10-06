/*
 * driver.cpp
 *
 *  Created on: 30Sep.,2016
 *      Author: jasonrego
 */

#include<iostream>
#include<string>
using namespace std;
#include "bid.h"
#include "trader.h"
#include "buyer.h"
#include "seller.h"

//int Trader::MIN_PRICE = 50;

int main()
{
	Buyer jason;
	Seller khush;
	//jason.generateBid();
	//Bid first("asjon", 'a',23.44,44);
	cout<<jason.generateBid();
	cout<<khush.generateBid();
	return 0;
}


