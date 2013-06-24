/* 
 * File:   main.c
 * Author: lesserj
 *
 * Created on May 23, 2013, 10:09 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
        printf("MapCubist for Cubist v2.07\n\n");

	if ( argc <= 1 || argc > 5)
	{
		printf("  Use:  mapcubist rootName ImgType outFile [MaskFile]\n");
		printf("\t  where:\n");
		printf("\t\trootName is the name (no extensions) of the\n");
		printf("\t\t\trootName.model and rootName.names files\n");
		printf("\t\tImgType is one of these case-sensitive strings:\n");
		printf("\t\t\tENVI  -- An ENVI image (.img) with .hdr header\n");
		printf("\t\t\tEHdr  -- An ESRI image (.bil) with .hdr header\n");
		printf("\t\t\tHFA   -- An ERDAS image (.img)\n");
		printf("\t\t\tGTiff -- A GeoTiff image\n");
		printf("\t\tOutFile is the output image in ImgType format\n");
		printf("\t\t\tspecified without extension\n");
		printf("\t\tMaskFile is an optional image mask file, with extension.\n");
		printf("\t\t\tPixels = 1 are processed, pixels = 0 are not...\n");
		
		exit(0);
	}
        
        char *rootName = argv[1];
	char *imgType = argv[2];
	char *outFile = argv[3];

	if (argc = 5)
	{
		char *maskFile = argv[4];
	}
        
        char *namesFilePath = malloc(strlen(rootName)+1+6);
	char *modelFilePath = malloc(strlen(rootName)+1+6);
	char *casesFilePath = malloc(strlen(rootName)+1+6);
        
        strcpy(namesFilePath, rootName);
        strcpy(modelFilePath, rootName);
        strcpy(casesFilePath, rootName);

	strcat(namesFilePath, ".names");
	strcat(modelFilePath, ".model");
	strcat(casesFilePath, ".cases");
	
	FILE *namesFile;
	FILE *modelFile;
	FILE *casesFile;
	
	namesFile = fopen(namesFilePath, "r");
	modelFile = fopen(modelFilePath, "r");
	casesFile = fopen(casesFilePath, "r");
        int c;
        if(namesFile)
        {
            while((c = getc(namesFile)) != EOF)
                putchar(c);
        }
        fclose(namesFile);
        return (EXIT_SUCCESS);
}

