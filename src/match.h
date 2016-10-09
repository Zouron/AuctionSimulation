/*
 * match.h
 *
 *  Created on: 7Oct.,2016
 *      Author: jasonrego
 */

#ifndef MATCH_H_
#define MATCH_H_

class Match
{
private:
	Bid seller;
	Bid buyer;
public:
	void setMatch(Bid&,Bid&);
	Match();
	void displayMatch();
};

Match::Match()
{
	Bid seller;
	Bid buyer;
}

void Match::setMatch(Bid& b, Bid& s)
{
	seller = s;
	buyer = b;
}

void Match::displayMatch()
{
	cout<<setfill(' ')
		<<seller<<" <--> "
		<<setw(5)<<buyer<<"; Clearing price: "
		<<(seller.getPrice() + buyer.getPrice())/2
		<<endl;
}



#endif /* MATCH_H_ */
