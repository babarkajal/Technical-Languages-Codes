#include<stdio.h>
# define pi 3.14

struct Volume{
		int r;
		int h;
		float vol;
};

float sphere(int r){
		float volume =(4/3)*pi*(r *r *r);
return volume;
}


float cube(struct Volume* v){
		
		float volume=v->r* v->r* v->r;
return volume; //return a value		
}

struct Volume cylinder(struct Volume v){
		
		v.vol=pi * v.r*v.r *v.h;
return v;//return varible of structure
	
}

void main(){
	struct Volume s={5};
	struct Volume c={6};
	struct Volume cyl={3,4};
	
	//pass by address
	float cubeVol=cube(&c);
	printf("Volube of the cube: %.2f\n",cubeVol);
	
	//pass by value
	float sphereVol=sphere(s.r);
	printf("Volube of the sphere: %.2f\n",sphereVol);
	
	//pass individual member of structure
	struct Volume CylinderVol= cylinder(cyl);
	printf("Volube of the Cylinder: %.2f\n",CylinderVol.vol);
	
}

