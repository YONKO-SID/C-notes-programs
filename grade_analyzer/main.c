/*
 * Grade Analyzer Program
 * Collects 5 student grades and calculates statistics including:
 * - Total sum of grades
 * - Average grade
 * - Maximum and minimum grades
 */

#include <stdio.h>

int main() {
    // Array to store 5 student grades
    int student_grades[5];
    int grade_total = 0;
    
    // Input loop: collect grades from user
    for(int i=0;i<5;i++)
    {
        printf("Enter grade %d: ",i+1);
        scanf("%d",&student_grades[i]);
    }
    
    // Display grades and calculate total sum
    for(int i = 0; i < 5 ; i++)
    {
        int grade_temp = student_grades[i];
        printf("grade %d: %d\n",i+1,grade_temp);
        grade_total += grade_temp;  // Add current grade to running total
    }
    
    // Display total and calculate average
    printf("grade total: %d\n",grade_total);
    float grade_average = (float)grade_total / 5;  // Cast to float for decimal precision
    printf("grade average: %.2f\n",grade_average);
    
    // Initialize max and min with first grade
    int max_grade , min_grade;
    max_grade = student_grades[0];
    min_grade = student_grades[0];
    
    // Find maximum and minimum grades
    for(int i = 0 ; i < 5 ; i++)
    {
       int current_grade = student_grades[i];
       if(current_grade > max_grade)
       {
           max_grade = current_grade;  // Update max if current grade is higher
       }
       if(current_grade < min_grade)
       {
           min_grade = current_grade;  // Update min if current grade is lower
       }
           
    }
    
    // Display final statistics
    printf("max grade: %d\n",max_grade);
    printf("min grade: %d\n",min_grade);
    
    return 0;
}
 