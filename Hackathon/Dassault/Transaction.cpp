#include "Transaction.h"



Transaction::Transaction()
{
}


Transaction::~Transaction()
{
}

istream & operator >> (istream & input, Transaction t)
{
	string tempStr;

	//PK_TRANSACTION_ID
	getline(input, tempStr);
	//FK_CUSTO_ID
	
	//getline(input, tempStr, ',');
	//TXTIME - date then time

	//POS1	POS2

	//

	return input;
}