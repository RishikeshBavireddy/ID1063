#include <stdio.h>
//function to decide grade
char grader(int score){
if(score <= 100 && score >= 90) return 'A';
else if(80 <= score && score <= 89) return 'B';
else if(70 <= score && score <= 79) return 'C';
else if(60 <= score && score <= 69) return 'D';
else if(0 <=score && score < 60) return 'F';
else return 0;
}
int main(){
int marks;
char grade;
scanf("%d", &marks);
if(grader(marks) != 0) {grade = grader(marks);}
else printf("INVALID");
printf("%c", grade);

}
