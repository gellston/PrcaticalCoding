#pragma once

#include <iostream>

namespace hv {
	class attorney;
	class client {
	private:
		void test(int number);
		friend class attorney;
	};
}
