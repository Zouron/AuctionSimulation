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
	Match(Bid&,Bid&);
	void displayMatch();
};

Match::Match(Bid& b, Bid& s)
{
	seller = s;
	buyer = b;
}

void Match::displayMatch()
{
	cout<<buyer<<" <--> "<<seller;
}



#endif /* MATCH_H_ */
