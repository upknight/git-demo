// This file is intended for mesh generating.
#include<stdio.h>
#include<math.h>

int main(int argc, char** argv){

    if(mesh_control_file()!=0){ 
	printf("Error: \n");
	return -1;
    }

    return 0;
}
