#include <iostream>

#include "client.h"
#include "consumer.h"

int main()
{
	hv::client test_client;
	hv::consumer test_consumer;
	test_consumer.check(test_client);
}

