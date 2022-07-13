//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 6_30	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 11.01.2022 18:54:08
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************
double Hoch(double d_Basis, int i_Exponent)
{
	double d_Ergebnis = 0;
	for (i = 0, i < i_Exponent, i++)
	{
		d_Ergebnis=d_Basis*d_Basis
	}
	return(d_Ergebnis)
}


int main(void)
{
	//Variables
	double d_W1 = 0;
	int i_W2 = 0;



	//Code
	scanf("%d", d_W1);
	scanf("%i", i_W2);

	Hoch(d_W1, i_W2);

	printf("Das Ergebnis ist %d", Hoch);



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}