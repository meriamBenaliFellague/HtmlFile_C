#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *video_file;
	video_file=fopen("video.html","w");
	fprintf(video_file,"<HTML>");
	fprintf(video_file,"<HEAD><link rel=stylesheet herf=style.css></HEAD>");
	fprintf(video_file,"<BODY style=background-color:black;color:white;>");
	fprintf(video_file,"<div class=container style=display:grid ;grid-template-rows: 1fr 50px 100px; width: 500px;>");
	fprintf(video_file," <div class=v style=grid-column:1/2;grid-row:1/2;><video  autoplay controls src=v.mp4></video></div> <div class=h2 style=grid-row:2/3;><h2>QR-Card-UI-HTML&CSS</h2></div> <div class=box style=grid-row:3/4;display:grid;grid-template-columns: 150px 150px;><div style=grid-column:1/2; class=text><h4 style=margin-top:0px;margin-bottom:0px;>Dhiya-Kellouche</h4><p style=margin-top:0px;>16 subscribers</p></div><div style=grid-columns:2/3; class=b><button style=width:100px;height:40px;border-radius:20px;border:1px solid white;>Subscribe</button></div></div>");
	fprintf(video_file,"</div>");
	fprintf(video_file,"</BODY>");
	fprintf(video_file,"</HTML>");
fclose(video_file);

	}
