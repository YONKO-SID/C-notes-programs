#include <stdio.h>
#include <string.h>

struct student
{
	char name[50];
	int roll_number;
	float marks[3];
	float avg_marks;
	char grade;
};

void calculateStudentStats(struct student *s_ptr);
int main(){
	struct student s ;
	printf("Enter your name\n");
	fgets(s.name,sizeof(s.name),stdin);
	s.name[strcspn(s.name,"\n")] = '\0';
	printf("Enter your roll number\n");
    scanf("%d",&s.roll_number);
    getchar();
    for(int i = 0;i <3;i++){
    	printf("Enter your marks %d\n",i+1);
    	scanf("%f",&s.marks[i]);
    	getchar();
    }
    calculateStudentStats(&s);
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_number);
	printf("Marks:\n");
    for(int i = 0;i <3;i++){
    	printf("Mark %d: %.2f\n",i+1,s.marks[i]);
    	printf("\n");
    }
    printf("Average Marks: %.2f\n", s.avg_marks);
    printf("Grade: %c\n", s.grade);
    return 0;
}

void calculateStudentStats(struct student *s_ptr){
	// to access a struct member using pointer i fucking need to  use -> operator
	float sum = s_ptr->marks[0] + s_ptr->marks[1] + s_ptr->marks[2];
    s_ptr->avg_marks = sum/3;
	if (s_ptr->avg_marks>= 90)
	{
		s_ptr->grade = 'A';
	}else if (s_ptr->avg_marks >= 80)
	{
		s_ptr->grade = 'B';
	}else if (s_ptr->avg_marks >= 70)
	{
		s_ptr->grade = 'C';
	}else if (s_ptr->avg_marks >= 60)
	{
		s_ptr->grade = 'D';
	}else{
		s_ptr->grade = 'F';
	}
}