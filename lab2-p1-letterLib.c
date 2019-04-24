# csc250-lab2
 #include <stdio.h>
	#include "gfx2.h"
    #include <math.h>
    #include "lab2-p1-letterLib.h"
    #include <string.h>
const double PI = 3.141592653589793;

//LETTER C
void drawCharC(double upperleftx, double upperlefty, double height){
	//calculates x, y coordinates of all corners... ulx means upper left , etc


	double ulx = upperleftx;
	double uly = upperlefty;
	double llx = upperleftx;
	double lly = upperlefty + height;
	double urx = upperleftx + height*.6;
	double ury = upperlefty;
	double lrx = upperleftx + height*.6;
	double lry = upperlefty + height;
	double ulxs = upperleftx + height*.2;
	double ulys = upperlefty + height*.2;
	double llxs = upperleftx + height*.2;
	double llys = upperlefty + height*.8;
	double urxs = upperleftx + height*.6;
	double urys = upperlefty + height*.2;
	double lrxs = upperleftx + height*.6;
	double lrys = upperlefty + height*.8;


	gfx_line(ulx, uly, llx, lly);
	gfx_line(llx, lly, lrx, lry);
	//gfx_line(lrx, lry, urx, ury);
	gfx_line(urx, ury, ulx, uly);
	gfx_line(ulxs, ulys, llxs, llys);
	gfx_line(llxs, llys, lrxs, lrys);
	//gfx_line(lrxs, lrys, urxs, urys);
	gfx_line(urxs, urys, ulxs, ulys);
	gfx_line(lrx, lry, lrxs, lrys);
	gfx_line(urx, ury, urxs, urys);
}


//LETTER D
void drawCharD(double ulCornerX, double ulCornerY, double height){
    double nextX, nextY, x, y;
    nextY = ulCornerY + height;
    gfx_line(ulCornerX,ulCornerY,ulCornerX,nextY);
    nextX = ulCornerX + (height * 0.46);
    gfx_line(ulCornerX,ulCornerY,nextX,ulCornerY);
    gfx_line(ulCornerX,nextY,nextX,nextY);
    x = ulCornerX + (height * 0.75);
    y = ulCornerY + (height * 0.8066666666666666666666666666666666666666666666);
    gfx_line(nextX,nextY,x,y);
    nextY = ulCornerY + (height * 0.193333333333333333333333333333333333333333333);
    gfx_line(x,y,x,nextY);
    gfx_line(x,nextY,nextX, ulCornerY);
    x = ulCornerX + (height * 0.20);
    nextX = ulCornerX + (height * 0.40);
    y = ulCornerY + (height * 0.20);
    gfx_line(x,y,nextX,y);
    x = ulCornerX + (height * 0.55);
    nextY = ulCornerY + (height * 0.30);
    gfx_line(nextX, y, x, nextY);
    y = ulCornerY + (height * 0.70);
    gfx_line(x, nextY, x, y);
    nextY = ulCornerY + (height * 0.80);
    gfx_line(x,y,nextX,nextY);
    x = ulCornerX + (height * 0.20);
    gfx_line(nextX, nextY, x, nextY);
    y = ulCornerY + (height * 0.20);
    gfx_line(x, nextY, x, y);
}

//LETTER E
void drawCharE( double ulCornerX, double ulCornerY, double height ){
    double width = .75* height;
     
    double llX = ulCornerX + 0.0 * width;
    double llY = ulCornerY + 1.0 * height;
    double lRX2 = ulCornerX + .75 * height;
    double lRY2 = ulCornerY + 1.0 * height;
    double lRX = ulCornerX + .75 * height;
    double lRY = llY - .2 * height;
    double lIRX = lRX - .5 * width;
    double lIRY = llY - .2 * height;
    double lIRX2 = lRX - .5 * width;
    double lIRY2 = lRY - .2 * height;
    double mRX2 = lRX - .2 * width;
    double mRY2 = lRY - .2 * height;
    double mRX = lRX - .2 * width;
    double mRY = lRY - .4 * height;
    double iRX2 = lIRX2 - .0 * width;
    double iRY2 = lIRY2 - .2 * height;
    double iRX = lIRX2 - .0 * width;
    double iRY = lIRY2 - .4 * height;
    double URX2 = iRX + .5 * width;
    double URY2 = iRY - .0 * height;
    double URX = URX2 - .0 * width;
    double URY = URY2 - .2 * height;
    
    gfx_line(ulCornerX,ulCornerY,llX,llY);
    gfx_line(llX,llY,lRX2,lRY2);
    gfx_line(lRX2,lRY2,lRX,lRY);
    gfx_line(lRX, lRY,lIRX, lIRY);
    gfx_line(lIRX,lIRY, lIRX2, lIRY2);
    gfx_line(lIRX2, lIRY2, mRX2, mRY2);
    gfx_line(mRX2, mRY2, mRX, mRY);
    gfx_line(mRX, mRY, iRX2, iRY2);
    gfx_line(iRX2, iRY2, iRX, iRY);
    gfx_line(iRX, iRY, URX2, URY2);
    gfx_line(URX2, URY2, URX, URY);
    gfx_line(URX, URY, ulCornerX, ulCornerY);
}  

//LETTER H
void drawCharH(double ulCornerX, double ulCornerY, double height){
    double width = height * 3/4;
    double llx, lly, lly2,llx2,lilx, lily, ulx2, uly2, uilx, uily, uirx, uiry,lirx,liry,
           ury, urx, lrx, lry, ury2, urx2, lrx2, lry2;
    
    llx = ulCornerX;
    lly = ulCornerY + height;
    llx2 = llx + (width * 1/3);
    lly2 = lly;
    lilx = llx2;
    lily = lly - (height * 2/5);
    ulx2 = ulCornerX + (width *1/3);
    uly2 = ulCornerY;
    uilx = ulx2;
    uily = uly2 + (height * 2/5);
    uirx = uilx + (width * 1/3);
    uiry = uily;
    lirx = lilx + (width * 1/3);
    liry = lily;
    urx = uirx;
    ury = uiry - (height * 2/5);
    lrx = lirx;
    lry = liry + (height * 2/5);
    urx2 = urx + (width * 1/3);
    ury2 = ury;
    lrx2 = lrx + (width * 1/3);
    lry2 = lry;


    gfx_line(ulCornerX,ulCornerY,llx,lly);
    gfx_line(llx,lly,llx2,lly2);
    gfx_line(llx2,lly2,lilx,lily);
    gfx_line(ulCornerX,ulCornerY,ulx2,uly2);
    gfx_line(ulx2,uly2,uilx,uily);
    gfx_line(uilx,uily,uirx,uiry);
    gfx_line(lilx,lily,lirx,liry);
    gfx_line(uirx,uiry,urx,ury);
    gfx_line(lirx,liry,lrx,lry);
    gfx_line(urx,ury,urx2,ury2);
    gfx_line(lrx,lry,lrx2,lry2);
    gfx_line(lrx2,lry2, urx2,ury2);
}

//LETTER I
void drawCharI( double ulCornerX, double ulCornerY, double height){
	double width = 0.75 * height;
	
	//Left side
	double lUTx = (ulCornerX + 0.25 * width); //Left upper top x
	double lUTy = (ulCornerY + 0 * height); //Left upper top x
	double lUBx = (ulCornerX + 0.25 * width); //Left upper bottom x
	double lUBy = (ulCornerY + 0.10 * height); //Left upper bottom y
	double lUCx = (ulCornerX + 0.40 * width); //Left upper inside corner x
	double lUCy = (ulCornerY + 0.10 * height); //Left upper inside corner y
	double lBCx = (ulCornerX + 0.40 * width); //Left bottom inside corner x
	double lBCy = (ulCornerY + 0.90 * height); //Left bottom inside corner y
	double lLTx = (ulCornerX + 0.25 * width); //Left lower top x
	double lLTy = (ulCornerY + 0.90 * height); //Left lower top y
	double lLBx = (ulCornerX + 0.25 * width); //Left lower bottom x
	double lLBy = (ulCornerY + 1.0 * height);  //Left lower bottom y


	//Right side
	double rUTx = (ulCornerX + 0.75 * width); //Right upper top x
	double rUTy = (ulCornerY + 0 * height); //Right upper top y
	double rUBx = (ulCornerX + 0.75 * width); //Right upper bottom x 
	double rUBy = (ulCornerY + 0.10 * height); //Right upper bottom y
	double rUCx = (ulCornerX + 0.60 * width); //Rigt upper inside corner x
	double rUCy = (ulCornerY + 0.10 * height); //Right upper inside corner y
	double rBCx = (ulCornerX + 0.60 * width); //Right bottom inside corner x
	double rBCy = (ulCornerY + 0.90 * height); //Right bottom inside corner y
	double rLTx = (ulCornerX + 0.75 * width); //Right lower top x
	double rLTy = (ulCornerY + 0.90 * height); //Right lower top y
	double rLBx = (ulCornerX + 0.75 * width); //Right lower bottom x
	double rLBy = (ulCornerY + 1.0 * height);  //Right lower bottom y


	//Draws the letter "I"
	gfx_line(lUTx,lUTy,lUBx,lUBy);
	gfx_line(lLTx, lLTy, lLBx, lLBy);
	gfx_line(lUBx,lUBy,lUCx,lUCy);
	gfx_line(lLTx,lLTy,lBCx,lBCy);
	gfx_line(lUCx,lUCy,lBCx,lBCy);
	gfx_line(lUTx,lUTy,rUTx,rUTy);
	gfx_line(lLBx,lLBy,rLBx,rLBy);
	gfx_line(rUTx,rUTy,rUBx,rUBy);
	gfx_line(rLTx,rLTy,rLBx,rLBy);
	gfx_line(rUCx,rUCy,rUBx,rUBy);
	gfx_line(rBCx,rBCy,rLTx,rLTy);
	gfx_line(rUCx,rUCy,rBCx,rBCy);
}


//LETTER J
void drawCharJ(double ulCornerX,double ulCornerY,double height){


	float width = 0.75*height;	
	
	//line 1
	gfx_line(ulCornerX+0.7*width,ulCornerY+0*height,ulCornerX+1*width,ulCornerY+0*height);
	//line 2
	gfx_line(ulCornerX+1*width,ulCornerY+0*height,ulCornerX+1*width,ulCornerY+1*height);
	//line 3
	gfx_line(ulCornerX+1*width,ulCornerY+1*height,ulCornerX+0*width,ulCornerY+1*height);
	//line 4
	gfx_line(ulCornerX+0*width,ulCornerY+1*height,ulCornerX+0*width,ulCornerY+0.5*height);
	//line 5
	gfx_line(ulCornerX+0*width,ulCornerY+0.5*height,ulCornerX+0.25*width,ulCornerY+0.5*height);
	//line 6
	gfx_line(ulCornerX+0.25*width,ulCornerY+0.5*height,ulCornerX+0.25*width,ulCornerY+0.8*height);
	//line 7
	gfx_line(ulCornerX+0.25*width,ulCornerY+0.8*height,ulCornerX+0.7*width,ulCornerY+0.8*height);
	//line 8
	gfx_line(ulCornerX+0.7*width,ulCornerY+0.8*height,ulCornerX+0.7*width,ulCornerY+0*height);


}

//LETTER N
void drawCharN(double ulCornerX, double ulCornerY, double height){
	// calculate all x and y coordinates of all points
 	double width = .75 * height;


	double ulx = ulCornerX;
  	double uly = ulCornerY;
	double umlx = ulCornerX + .33 * width;
	double umly = ulCornerY;
	double umrx = ulCornerX + .66 * width;
	double umry = ulCornerY;
	double urx = ulCornerX + 1.0 * width;
	double ury = ulCornerY;
	double lmx = ulCornerX + .33 * width;
	double lmy = ulCornerY + height/2;
	double rmx = ulCornerX + .66 * width;
	double rmy = ulCornerY + height/2;
	double llx = ulCornerX;
	double lly = ulCornerY + 1.0 * height;
	double lmlx = ulCornerX + .33 * width;
	double lmly = ulCornerY + 1.0 * height;
	double lmrx = ulCornerX + .66 * width;
	double lmry = ulCornerY + 1.0 * height;
	double lrx = ulCornerX + 1.0 * width;
	double lry = ulCornerY + 1.0 * height; 


	gfx_line(ulx,uly,umlx,umly);
	gfx_line(umlx,umly,rmx,lmy);
	gfx_line(rmx,lmy,umrx,umry);
	gfx_line(umrx,umry,urx,ury);
	gfx_line(urx,ury,lrx,lry);
	gfx_line(lrx,lry,lmrx,lmry);
	gfx_line(lmrx,lmry,lmx,lmy);
	gfx_line(lmx,lmy,lmlx,lmly);
	gfx_line(lmlx,lmly,llx,lly);
	gfx_line(llx,lly,ulx,uly);
}

//LETTER L
void drawCharL(double ulCornerX, double ulCornerY, double height){
	int width;
	width = height * 0.75;


	gfx_line(ulCornerX+width*.25,ulCornerY+height*0,ulCornerX+width*.25,ulCornerY+height*.8);// middle vertical line
	gfx_line(ulCornerX+width*0,ulCornerY+height*1,ulCornerX+width*0,ulCornerY+height*0); // left vertical line
	gfx_line(ulCornerX+width*.75,ulCornerY+height*.8,ulCornerX+width*.75,ulCornerY+height*1); // right vertical line
	gfx_line(ulCornerX+width*0,ulCornerY+height*0,ulCornerX+width*.25,ulCornerY+height*0);	// top horizontal line
	gfx_line(ulCornerX+width*0,ulCornerY+height*.99999,ulCornerX+width*.75,ulCornerY+height*.99999);// bottom horizontal line
	gfx_line(ulCornerX+width*.25,ulCornerY+height*.8,ulCornerX+width*.75,ulCornerY+height*.8); // middle horizontal line
}



//LETTER Q
void drawCharQ(double ulCornerX, double ulCornerY, double height){


    double width = .75 * height;    
       
    double x1 = ulCornerX + width * .125;
    double y1 = ulCornerY + height * 0;
    double x2 = ulCornerX + width * .875;
    double y2 = ulCornerY + height * 0;
    double x3 = ulCornerX + width;
    double y3 = ulCornerY + height * .125;
    double x4 = ulCornerX + width;
    double y4 = ulCornerY + height * .75;
    double x5 = ulCornerX + width * .906;
    double y5 = ulCornerY + height * .844;
    double x6 = ulCornerX + width;
    double y6 = ulCornerY + height * .906;
    double x7 = ulCornerX + width * .906;
    double y7 = ulCornerY + height;
    double x8 = ulCornerX + width * .812;
    double y8 = ulCornerY + height * .937;
    double x9 = ulCornerX + width * .812;
    double y9 = ulCornerY + height * .937;
    double x10 = ulCornerX + width * .125;
    double y10 = ulCornerY + height * .937;
    double x11 = ulCornerX + width * 0;
    double y11 = ulCornerY + height * .844;
    double x12 = ulCornerX + width * 0;
    double y12 = ulCornerY + height * .125;
    
    //Inner outline coords
    double x13 = ulCornerX + width * .312;
    double y13 = ulCornerY + height * .125;
    double x14 = ulCornerX + width * .687;
    double y14 = ulCornerY + height * .125;
    double x15 = ulCornerX + width * .812;
    double y15 = ulCornerY + height * .25;
    double x16 = ulCornerX + width * .812;
    double y16 = ulCornerY + height * .687;
    double x17 = ulCornerX + width * .687;
    double y17 = ulCornerY + height * .812;
    double x18 = ulCornerX + width * .312;
    double y18 = ulCornerY + height * .812;
    double x19 = ulCornerX + width * .187;
    double y19 = ulCornerY + height * .687;
    double x20 = ulCornerX + width * .187;
    double y20 = ulCornerY + height * .25;
    
    //Draws line segments to create outer outline 'Q' character.
    gfx_line(x1,y1,x2,y2);
    gfx_line(x2,y2,x3,y3);
    gfx_line(x3,y3,x4,y4);
    gfx_line(x4,y4,x5,y5);
    gfx_line(x5,y5,x6,y6);
    gfx_line(x6,y6,x7,y7);
    gfx_line(x7,y7,x8,y8);
    gfx_line(x8,y8,x9,y9);
    gfx_line(x9,y9,x10,y10);
    gfx_line(x10,y10,x11,y11);
    gfx_line(x11,y11,x12,y12);
    gfx_line(x12,y12,x1,y1);
    
    //Draws line segment to create inner outline 'Q' character.
    gfx_line(x13,y13,x14,y14);
    gfx_line(x15,y15,x14,y14);
    gfx_line(x15,y15,x16,y16);
    gfx_line(x17,y17,x16,y16);
    gfx_line(x17,y17,x18,y18);
    gfx_line(x19,y19,x18,y18);
    gfx_line(x19,y19,x20,y20);
    gfx_line(x13,y13,x20,y20);
    
}//End drawCharQ function


//LETTER S
void drawCharS(double ulCornerX, double ulCornerY, double height){
	double width= .75 * height;


	double x1 = ulCornerX + width * 0;
	double y1 = ulCornerY + height * 0;
	double x2 = ulCornerX + width * 0;
	double y2 = ulCornerY + height * .6;
 	double x3 = ulCornerX + width * .5;
	double y3 = ulCornerY + height * .6;
	double x4 = ulCornerX + width * .5;
	double y4 = ulCornerY + height* .75;
	double x5 = ulCornerX + width * 0;
	double y5 = ulCornerY + height * .75;
	double x6 = ulCornerX + width * 0;
	double y6 = ulCornerY + height;
	double x7 = ulCornerX + width;
	double y7 = ulCornerY + height;
	double x8 = ulCornerX + width;
 	double y8 = ulCornerY + height * .4;
	double x9 = ulCornerX + width * .5;
	double y9 = ulCornerY + height * .4;
	double x10 = ulCornerX + width * .5;
	double y10 = ulCornerY + height * .25;
	double x11 = ulCornerX + width;
	double y11 = ulCornerY + height * .25;
	double x12 = ulCornerX + width;
	double y12 = ulCornerY + height * 0;


	gfx_line(x1,y1,x2,y2);
	gfx_line(x2,y2,x3,y3);
	gfx_line(x3,y3,x4,y4);
	gfx_line(x4,y4,x5,y5);
	gfx_line(x5,y5,x6,y6);
	gfx_line(x6,y6,x7,y7);	
	gfx_line(x7,y7,x8,y8);
	gfx_line(x8,y8,x9,y9);
	gfx_line(x9,y9,x10,y10);
	gfx_line(x10,y10,x11,y11);
	gfx_line(x11,y11,x12,y12);
	gfx_line(x12,y12,x1,y1);
}

//LETTER T
void drawCharT(double ulCornerX,double ulCornerY, double height){
    double width = height * .75;
    
    //Define points for top line
    double topLLineX = ulCornerX;
    double topLLineY = ulCornerY;
    double topRLineX = ulCornerX + width;
    double topRLineY = ulCornerY;


    //Define points to top Left small drop down
    double smlLLineX = ulCornerX;
    double smlLLineY = ulCornerY + height/4;
    
    //Define points to top Right small drop down
    double smlRLineX = topRLineX;
    double smlRLineY = topRLineY + height/4;
    
    //Define points to left to right line
    double smlLtoRX = smlLLineX + height/4;
    double smlLtoRY = smlLLineY;
    
    //Define points to right to left line
    double smlRtoLX = smlRLineX - height/4;
    double smlRtoLY = smlRLineY; 
    
    //Define points for left large drop down
    double lrgLDropX = smlLtoRX;
    double lrgLDropY = smlLtoRY + height/1.75;
    
    //Define points for right large drop down
    double lrgRDropX = smlRtoLX;
    double lrgRDropY = smlRtoLY + height/1.75;
    


    //Draw top line for T
    gfx_line(topLLineX,topLLineY,topRLineX,topRLineY);
    gfx_line(topLLineX,topLLineY,smlLLineX,smlLLineY);
    gfx_line(topRLineX,topRLineY,smlRLineX,smlRLineY); 
    gfx_line(smlLLineX,smlLLineY,smlLtoRX,smlLtoRY);
    gfx_line(smlRLineX,smlRLineY,smlRtoLX,smlRtoLY);
    gfx_line(smlLtoRX,smlLtoRY,lrgLDropX,lrgLDropY);
    gfx_line(smlRtoLX,smlRtoLY,lrgRDropX,lrgRDropY);
    
    //For bottom line, can use two existing points
    gfx_line(lrgLDropX,lrgLDropY,lrgRDropX,lrgRDropY);
}

//LETTER U
void drawCharU (double ulCornerX, double ulCornerY, double height){
	double width = (3*height)/4;


	gfx_line(ulCornerX, ulCornerY, ulCornerX, ulCornerY+height);
	gfx_line(ulCornerX, ulCornerY+height, ulCornerX+width, ulCornerY+height);
   	gfx_line(ulCornerX+width, ulCornerY+height, ulCornerX+width, ulCornerY);
     gfx_line(ulCornerX, ulCornerY, ulCornerX+(1*width)/4, ulCornerY);
     gfx_line(ulCornerX+(1*width)/4, ulCornerY, ulCornerX+(1*width)/4, ulCornerY+(3*height)/4);
     gfx_line(ulCornerX+(1*width)/4, ulCornerY+(3*height)/4, ulCornerX+(3*width)/4, ulCornerY+(3*height)/4);
     gfx_line(ulCornerX+(3*width)/4, ulCornerY+(3*height)/4, ulCornerX+(3*width)/4, ulCornerY);
     gfx_line(ulCornerX+(3*width)/4, ulCornerY, ulCornerX+width, ulCornerY);
}

//LETTER V
void drawCharV(double ulCornerX, double ulCornerY, double height){
     double x = ulCornerX;
	double y = ulCornerY;
	double width = height * 1;


	gfx_line(ulCornerX + width*0 ,ulCornerY + height*0,ulCornerX + width*.20 ,ulCornerY + height*0 );
	gfx_line(ulCornerX + width*.30 ,ulCornerY + height*.98 ,ulCornerX + width*.45 ,ulCornerY + height*.98 );
	gfx_line(ulCornerX + width*0 ,ulCornerY + height*0 ,ulCornerX + width*.30 ,ulCornerY + height*.98 );
	gfx_line(ulCornerX + width*.45 ,ulCornerY + height*.98 ,ulCornerX + width*.75 ,ulCornerY + height*0);
	gfx_line(ulCornerX + width*.75 ,ulCornerY + height*0 ,ulCornerX + width*.55 ,ulCornerY + height*0 );
	gfx_line(ulCornerX + width*.55 ,ulCornerY + height*0 ,ulCornerX + width*.38 ,ulCornerY + height*.75 );
	gfx_line(ulCornerX + width*.38 ,ulCornerY + height*.75 ,ulCornerX + width*.20 ,ulCornerY + height*0 );
}

//LETTER Y
void drawCharY(double ulCornerX, double ulCornerY, double side){
    // calculate x,y coordinates of all corners


    double height = side;
    double width = height*.75;
    double ulx = width - width;
    double uly = height - height;
    double llx = width - width;
    double lly = height;
    double urx = width;
    double ury = height - height;
    double lrx = width;
    double lry = height;


    gfx_line(ulCornerX+width-width,ulCornerY+height-height,ulCornerX+.4*width,ulCornerY+.55*height);
    gfx_line(ulCornerX+.4*width,ulCornerY+.55*height,ulCornerX+.4*width,ulCornerY+height);
    gfx_line(ulCornerX+.4*width,ulCornerY+height,ulCornerX+.6*width,ulCornerY+height);
    gfx_line(ulCornerX+.6*width,ulCornerY+height,ulCornerX+.6*width,ulCornerY+.55*height);
    gfx_line(ulCornerX+.6*width,ulCornerY+.55*height,ulCornerX+urx,ulCornerY+ury);
    gfx_line(ulCornerX+width,ulCornerY+height-height,ulCornerX+.8*width,ulCornerY+height-height);
    gfx_line(ulCornerX+.8*width,ulCornerY+height-height,ulCornerX+.5*width,ulCornerY+.375*height);
    gfx_line(ulCornerX+.5*width,ulCornerY+.375*height,ulCornerX+.2*width,ulCornerY+height-height);
    gfx_line(ulCornerX+.2*width,ulCornerY+height-height,ulCornerX+width-width,ulCornerY+height-height);
}

//LETTER R
void drawCharR(double ulCornerX, double ulCornerY, double height){
	double width = .75 * height;//overall width of letter
	double radiusLg = ((.8*width)/2);//radius of the large/outer circular part
	double radiusSm = (width - (.6*width))/2;//radius of small/inner circular part
	double circCenterX = ulCornerX+width-radiusLg;//x coordinate of circular parts
	double circCenterY = ulCornerY + radiusLg;//y coordinates of circular parts
	double theta;
	double thetaNext;
	double thetaIncrement = 2.0 / (2 * PI * radiusLg); //in radians


	//gfx_line(ulCornerX,ulCornerY,ulCornerX+width,ulCornerY);
	//gfx_line(ulCornerX+width,ulCornerY,ulCornerX+width,ulCornerY+height);
	//gfx_color(0,200,200);
	//draw straight segments of letter "R"
	gfx_line(ulCornerX,ulCornerY,ulCornerX,ulCornerY+height);
	gfx_line(ulCornerX,ulCornerY,circCenterX,ulCornerY);
	gfx_line(ulCornerX,ulCornerY+height,(ulCornerX+(.2*width)),ulCornerY+height);
	gfx_line((ulCornerX+(.2*width)),(ulCornerY+(.15*height)),circCenterX,(ulCornerY+(.15*height)));
	gfx_line((ulCornerX+(.2*width)),(ulCornerY+.45*height),circCenterX,(ulCornerY+(.45*height)));
	gfx_line((ulCornerX+(.2*width)),(ulCornerY+(.15*height)),(ulCornerX+(.2*width)),(ulCornerY+.45*height));
	gfx_line((ulCornerX+(.2*width)),(ulCornerY+(.6*height)),((ulCornerX+((.7*width))/2)),(ulCornerY+(.6*height)));
	gfx_line((ulCornerX+(.2*width)),(ulCornerY+(.6*height)),(ulCornerX+(.2*width)),ulCornerY+height);
	//gfx_color(0,0,200);
	gfx_line(((ulCornerX+(((.7*width))/2))),(ulCornerY+(.6*height)),ulCornerX+width-(circCenterX-((ulCornerX+((.7*width))/2))),ulCornerY+height);
	//gfx_color(200,200,0);
	gfx_line(circCenterX,(ulCornerY+(.6*height)),ulCornerX+width,ulCornerY+height);
	//gfx_color(0,200,0);
	gfx_line(ulCornerX+width-(circCenterX-((ulCornerX+((.7*width))/2))),ulCornerY+height,ulCornerX+width,ulCornerY+height);


	for(theta = -PI/2; theta <= PI/2; theta = thetaNext)//Draw large/outer circular part of "R"
	{
	thetaNext = theta +thetaIncrement;
	double x = circCenterX + radiusLg * cos(theta);
	double y = circCenterY + radiusLg * sin(theta);
	double xNext = circCenterX + radiusLg * cos(thetaNext);
	double yNext = circCenterY + radiusLg * sin(thetaNext);


	gfx_line(x,y,xNext,yNext);
	}


	for(theta = -PI/2; theta <= PI/2; theta = thetaNext)//Draw Small/inner circular part of the "R"
	{
	thetaNext = theta +thetaIncrement;
	double x = circCenterX + radiusSm * cos(theta);
	double y = circCenterY + radiusSm * sin(theta);
	double xNext = circCenterX + radiusSm * cos(thetaNext);
	double yNext = circCenterY + radiusSm * sin(thetaNext);


	gfx_line(x,y,xNext,yNext);
	}
}


//LETTER Z
void drawCharZ (double ulCornerX, double ulCornerY, double height){
    double x = ulCornerX; 
    double y = ulCornerY; 
    double x1 = ulCornerX + 0.75 * height;
    double y1 = ulCornerY + 0 * height; 
    double x2 = ulCornerX + 0 * height;
    double y2 = ulCornerY + 0.2 * height;
    double x3 = ulCornerX + 0.4 * height;
    double y3 = ulCornerY + 0.2 * height;
    double x4 = ulCornerX + 0.75 * height;
    double y4 = ulCornerY + 0.2 * height;
    double x5 = ulCornerX + 0 * height;
    double y5 = ulCornerY + 0.8 * height; 
    double x6 = ulCornerX + 0.35 * height;
    double y6 = ulCornerY + 0.80 * height;
    double x7 = ulCornerX + 0.75 * height;
    double y7 = ulCornerY + 0.8 * height;
    double x8 = ulCornerX + 0 * height;
    double y8 = ulCornerY + 1.0 * height;
    double x9 = ulCornerX + 0.75 * height;
    double y9 = ulCornerY + 1.0 * height; 


    gfx_line(x,y,x1,y1);
    gfx_line(x1,y1,x4,y4);
    gfx_line(x4,y4,x6,y6);
    gfx_line(x6,y6,x7,y7);
    gfx_line(x7,y7,x9,y9);
    gfx_line(x9,y9,x8,y8);
    gfx_line(x8,y8,x5,y5);
    gfx_line(x5,y5,x3,y3);
    gfx_line(x3,y3,x2,y2);
    gfx_line(x2,y2,x,y);
}

void drawMissingLetter(double ulCornerX, double ulCornerY, double height){
	float width = 0.75*height;
	gfx_line(ulCornerX+0*width,ulCornerY+0*height,ulCornerX+1*width,ulCornerY+0*height);
	gfx_line(ulCornerX+1*width,ulCornerY+0*height,ulCornerX+1*width,ulCornerY+1*height);
	gfx_line(ulCornerX+1*width,ulCornerY+1*height,ulCornerX+0*width,ulCornerY+1*height);
	gfx_line(ulCornerX+0*width,ulCornerY+1*height,ulCornerX+0*width,ulCornerY+0*height);
	gfx_line(ulCornerX+0*width,ulCornerY+0*height,ulCornerX+1*width,ulCornerY+1*height);
	gfx_line(ulCornerX+1*width,ulCornerY+0*height,ulCornerX+0*width,ulCornerY+1*height);
}

void drawText(char* text, double x, double y, double height){
	int i;
	//printf("\nText length: %d", strlen(text));
	for(i=0; i<strlen(text); i++){
		switch(text[i]){
			case 'A':
			case 'a': drawMissingLetter(x,y,height); break;
			case 'B':
			case 'b': drawMissingLetter(x,y,height); break;
			case 'C':
			case 'c': drawCharC(x,y,height); break;
			case 'D':
			case 'd': drawCharD(x,y,height); break;
			case 'E':
			case 'e': drawCharE(x,y,height); break;
			case 'F':
			case 'f': drawMissingLetter(x,y,height); break;
			case 'G':
			case 'g': drawMissingLetter(x,y,height); break;
			case 'H':
			case 'h': drawCharH(x,y,height); break;
			case 'I':
			case 'i': drawCharI(x,y,height); break;
			case 'J':
			case 'j': drawCharJ(x,y,height); break;
			case 'K':
			case 'k': drawMissingLetter(x,y,height); break;
			case 'L':
			case 'l': drawCharL(x,y,height); break;
			case 'M':
			case 'm': drawMissingLetter(x,y,height); break;
			case 'N':
			case 'n': drawCharN(x,y,height); break;
			case 'P':
			case 'p': drawMissingLetter(x,y,height); break;
			case 'Q':
			case 'q': drawCharQ(x,y,height); break;
			case 'R':
			case 'r': drawCharR(x,y,height); break;
			case 'S':
			case 's': drawCharS(x,y,height); x+=0.30*height; break;
			case 'T':
			case 't': drawCharT(x,y,height); break;
			case 'U':
			case 'u': drawCharU(x,y,height); break;
			case 'V':
			case 'v': drawCharV(x,y,height); break;
			case 'W':
			case 'w': drawMissingLetter(x,y,height); break;
			case 'X':
			case 'x': drawMissingLetter(x,y,height); break;
			case 'Y':
			case 'y': drawCharY(x,y,height); break;
			case 'Z':
			case 'z': drawCharZ(x,y,height); break;

			
		}
		x+=0.75*height;
	}
}



