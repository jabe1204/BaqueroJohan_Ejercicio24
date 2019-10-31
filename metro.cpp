#include <iostream>
#include <cmath>
#include <random>
#include <stdlib.h>

int main(){
  int i;
  float sigma;
  float r;
  int N;
  float propuesta;
  float alpha;
  float aleatorio;
	
  N = 1000;	
  sigma = 1.0;
  srand48(8);
  aleatorio =drand48();
	
  for (i=0;i<N;i++)
  {  
	propuesta = aleatorio + (drand48()-0.5);  
    r = exp(-propuesta*propuesta/(2.0*sigma*sigma))/exp(-i*i/(2.0*sigma*sigma));
	alpha = drand48();
	if(alpha<r)
	{
		std::cout << propuesta<< std::endl;
	}
	else
	{
		std::cout << i<< std::endl;
	}
    
  }
  
  return 0;
}
