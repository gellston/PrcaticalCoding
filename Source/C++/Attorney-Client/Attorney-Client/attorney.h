#pragma once

#include "client.h"

namespace hv {
	class consumer;
	class attorney {
	private:
		static void test(client& client, int number);
		friend class consumer;
	};
}