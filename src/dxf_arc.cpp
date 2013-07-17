/**
 *       \file      dxf_arc.cpp
 *
 *       \brief     This file defines arc class. 
 *                  arc class is used to create arc entity 
 *
 *       \version   0.1
 *       \date      07/06/2013 09:30:23 PM
 *       Compiler  gcc
 *
 *       \author    Avneet Kaur, kauravneet958@gmail.com
 *        License   GNU General Public License
 *      \copyright  Copyright (c) 2013, GreatDevelopers
 *                  https://github.com/GreatDevelopers
 */


# include "../include/dxf_2D.h"


/**
 *      \class  arc
 *      \fn     arc :: arc()
 *      \brief  Default constructor
 */


arc :: arc ()
{
}



/**
 *      \class  arc
 *      \fn     arc :: arc(point& pt1, double r, double start_a, double end_a, string dlayer, dxf& d)
 *      \brief  Initializes starting point, radius of arc, start angle and end angle, specify the 
 *              layer and calls write_arc(xStart, yStart, zStart, radius, startangle, end angle 
 *              layer) function of dxf class for writing arc.
 *              entity to DXF file.
 */


arc :: arc(point& pt1, double r, double start_a, double end_a, string dlayer, dxf& d)
{	
	xStart     = pt1.xCo;
	yStart     = pt1.yCo;
	zStart     = pt1.zCo;	
	radius     = r;
        startAngle = start_a;
        endAngle   = end_a;
	layer      = dlayer;

	if(d.writeFile.is_open())
	{
	    d.write_arc(xStart, yStart, zStart, radius, startAngle, endAngle, layer);
	}
	else
	    cout<<"\n  Arc Entity not write \n";
	}

