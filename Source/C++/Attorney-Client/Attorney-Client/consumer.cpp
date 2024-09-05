
#include "consumer.h"
#include "attorney.h"


void hv::consumer::check(hv::client& client) {
	hv::attorney::test(client, 512);
}