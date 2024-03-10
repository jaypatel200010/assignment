//15.Write a C program to determine eligibility for admission to a professional course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
//in Chem>=50 and Total in all three subject >=190 or Total in Maths and
//Physics >=140 --------------------------------------Input the marks obtained in
//Physics :65 Input the marks obtained in Chemistry :51 Input the marks
//obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
//188 Total marks of Maths and Physics : 137 The candidate is not eligible.
#include <stdio.h>
int main() {
    int phy, chem, maths, totalMarks, mathsPhysicsTotal;
    // Input marks from the user
    printf("Enter the marks obtained in Physics: ");
    scanf("%d", &phy);
    printf("Enter the marks obtained in Chemistry: ");
    scanf("%d", &chem);
    printf("Enter the marks obtained in Mathematics: ");
    scanf("%d", &maths);
    //Total marks of Maths, Physics and Chemistry
    totalMarks = phy+chem+maths;
    printf("Total marks of Maths, Physics, and Chemistry is %d\n",totalMarks);
    //Total marks of Maths and Physics 
    mathsPhysicsTotal=maths+phy;
    printf("Total marks of Maths and Physics is %d\n",mathsPhysicsTotal);
    //condition: Check eligibility based on the criteria
    if (phy >= 55 && chem >= 50 && maths >= 65 && totalMarks >= 190) 
	{
        printf("The candidate is eligible.\n");
    } 
	else if (mathsPhysicsTotal >= 140) 
	{
        printf("The candidate is eligible.\n");
    } 
	else{
        printf("The candidate is not eligible.\n");
    }
}
