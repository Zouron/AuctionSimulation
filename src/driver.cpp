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

int main()
{
	Bid::bidCounter=100;
	Bid first("asjon", 'a',23.44,44);
	cout<<first;
	return 0;
}


