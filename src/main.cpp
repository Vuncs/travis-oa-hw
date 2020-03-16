#include <QDebug>

#include "basicops.h"


int main()
{
	qDebug() << "Hello Travis!";

	int a[5] = {2, 7, 1, -8, 4};
	
	int ad = basicops::add(a[0], a[3]);
	qDebug() << "Add : " << ad;

	int di = basicops::div(a[4], a[0]);
	qDebug() << "Div : "<< di;

	int mu = basicops::multi(a[3], a[1]);
	qDebug() << "Multi : "<< mu;

	int su = basicops::sub(a[1], a[2]);
	qDebug() << "Sub : "<< su;

	return 0;
}

