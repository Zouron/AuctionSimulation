/*
 * driver.cpp
 *
 *  Created on: 30Sep.,2016
 *      Author: jasonrego
 */
extern const int NUM_SELLER = 10;
extern const int NUM_BUYER = 10;
#include<iostream>
#include<string>
#include<ctime>
#include <iomanip>
#include <fstream>
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
#include "simulator.h"

//int Trader::MIN_PRICE = 50;

int main()
{
	Simulator s;
	s.openMarket();

	return 0;
}


