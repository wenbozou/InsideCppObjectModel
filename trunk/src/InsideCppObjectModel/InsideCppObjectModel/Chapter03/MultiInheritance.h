#pragma once

namespace Chapter03
{
	class ios {
	public:
		ios();
		~ios();
	};

	class istream : public ios {
	public:
		istream();
		~istream();
	};

	class ostream: public ios{
	public:
		ostream();
		~ostream();
	};

	class iostream : public istream, public ostream {
	public:
		iostream();
		~iostream();
	};

}
