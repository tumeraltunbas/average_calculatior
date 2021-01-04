#include<stdio.h>
int main (){
int midtermexam,homework,finalexamination,average;
printf("Please enter your midterm exam grade(out of 100):");
scanf("%d",&midtermexam);
printf("Please enter your final exam grade(out of 100):");
scanf("%d",&finalexamination);
printf("Please enter your homework grade(out of 100):");
scanf("%d",&homework);
average= (midtermexam*0.40+finalexamination*0.60+homework*0.10);
printf("Your Average: %d\n",average);
if (average<60){
	printf("Sorry you didn't pass the lesson.");
}
else {
	printf("Congratulations, you passed the lesson successfully.");
}
return 0;
}
