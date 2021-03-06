#pragma once

namespace Chapter03
{
	class ios {
	public:
		ios();
		~ios();
	};

	class istream : virtual public ios {
	public:
		istream();
		~istream();
	};

	class ostream : virtual public ios {
	public:
		ostream();
		~ostream();
	};

	class iostream : virtual public istream, virtual public ostream {
	public:
		iostream();
		~iostream();
	};

}

