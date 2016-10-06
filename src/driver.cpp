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

int main()
{
	srand(time(NULL));
	Buyer jason[5];
	Seller khush[5];
	for(int i=0;i<5;i++)
		cout<<jason[i].getBid();
	for(int i=0;i<5;i++)
		cout<<khush[i].getBid();
	return 0;
}


