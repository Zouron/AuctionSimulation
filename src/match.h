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
	cout<<buyer<<" <--> "<<seller<<endl;
}



#endif /* MATCH_H_ */
