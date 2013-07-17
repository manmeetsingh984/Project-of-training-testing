/**
 *       \file      dxf_layer.cpp
 *
 *       \brief     This file defines dxf class.
 *                  dxf class is used to draw multiple entites in a  DXF file.
 *
 *       \version   0.1
 *       \date      03/19/2013 09:10:35 PM
 *       Compiler   gcc
 *
 *       \author    Avneet Kaur, kauravneet958@gmail.com
 *        License   GNU General Public License
 *      \copyright  Copyright (c) 2013, GreatDevelopers
 *                  https://github.com/GreatDevelopers
 */


# include "../include/dxf_2D.h"


/**
 *      \class  Layer
 *      \fn     Layer :: Layer()
 *      \brief  Default constructor
 */


Layer :: Layer()
{

}

Layer :: Layer(string dlayer, int color, double thick, string linetype, dxf& d)
{	
	layer     = dlayer;
	color     = color;
	thickness = thick;	
	line_Type = linetype;
      	if(d.writeFile.is_open())
	{
	    d.write_Layer(layer, color, thickness, line_Type);
	}
	else
	    cout<<"\n  Layer Entity not write \n";
	
}
