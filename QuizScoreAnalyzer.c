#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 4
#define QUIZZES 5

main() {
	int quizzScores[STUDENTS][QUIZZES] = {
		{90, 90, 90, 90, 90},
		{90, 80, 70, 60, 50},
		{90, 89, 88, 87, 86},
		{90, 85, 80, 75, 70}
	
	};

	int studentTotal = 0, row, col, quiztotal;
	double studentAvg = 0, quizAverage;


	for (row = 0; row < STUDENTS; row++) {
		studentTotal = 0;
		for (col = 0; col < QUIZZES; col++) {
			studentTotal += quizzScores[row][col];
		}
		studentAvg = (double)studentTotal / QUIZZES;
		printf("Student %i has average %.2lf\n", row, studentAvg);

	}

	for (col = 0; col < QUIZZES; col++) {
		quiztotal = 0;

		for (row = 0; row < STUDENTS; row++) {
			quiztotal += quizzScores[row][col];
		}
		quizAverage = (double)quiztotal / STUDENTS;
		printf("Quiz %i has average %.2lf\n", col, quizAverage);
	}


	system("pause");
}