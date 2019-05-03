    #include <stdio.h>
    #include "gfx2.h"
    #include <math.h>
    #include <string.h>
int main(){
	int ysize = 1000;
	int xsize = 1000;
	char c;
	char text[100];
	double x,y,height;
	int R,G,B;
	
	// Open a new window for drawing.
	gfx_open(xsize,ysize,"lab2-p1-GfxText.c");
	
	//drawAllChars();
	while(1){
	printf("\nEnter text: ");
	scanf("%s", text);
	if(strstr(text,"quit")){
		goto leaveProgram;
	} else if(strstr(text,"clear")){
		gfx_clear();
		gfx_flush();
		printf("\n******CLEARED SCREEN********\n");
		continue;
	}
	printf("\nEnter R,G,B values: ");
	scanf("%d %d %d", &R,&G,&B);
	printf("\nEnter x,y: ");
	scanf("%lf %lf", &x,&y);
	printf("\nEnter height: ");
	scanf("%lf", &height);
	
	gfx_color(R,G,B);
	drawText(text,x,y,height);
	gfx_flush();
	}
	
	while(1) {
		// Wait for the user to press a character.
		c = gfx_wait();


		// Quit if it is the letter q.
		if(c=='q'){
		leaveProgram:
		break;
		}
	}
}


