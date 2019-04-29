
#pragma once
#include "Message.h"

namespace w5 {

	class Notifications {
		Message* messageTable;
		size_t count;
		int capacity;
	public:
		Notifications();
		Notifications(const Notifications&);
		Notifications& operator=(const Notifications&);
		Notifications(Notifications&&);
		Notifications&& operator=(Notifications&&);
		~Notifications();
		void operator+=(const Message& msg);
		void display(std::ostream& os) const;
	};
}
