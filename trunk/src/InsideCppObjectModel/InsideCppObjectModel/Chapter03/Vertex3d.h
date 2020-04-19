#pragma once

namespace Chapter03
{
	class Point2d{
	public:
		Point2d();
		virtual ~Point2d();
	protected:
		float _x, _y;
	};

	class Vertex : public virtual Point2d {
	public:
		Vertex();
		virtual ~Vertex();

	protected:
		Vertex *next;
	};

	class Point3d : public virtual Point2d {
	public:
		Point3d();
		virtual ~Point3d();

	protected:
		float z;
	};

	class Vertex3d : public virtual Vertex, public virtual Point2d {
	public:
		Vertex3d();
		virtual ~Vertex3d();

	protected:
		float numble;
	};
}
