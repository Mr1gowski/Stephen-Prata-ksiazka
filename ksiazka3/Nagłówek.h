#ifndef NAG��WEK_H_
#define NAG��WEK_H_
struct polar
{
	double distance;
	double angle;
};

struct rect
{
	double x;
	double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif // !NAG��WEK_H_

